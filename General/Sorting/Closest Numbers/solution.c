int c[1024 * 1024 * 10];
//int res[1024];
int *res;
void merge(int *arr, int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    int k = l;

    while ((i <= mid) && (j <= h)) {
        if (arr[i] <= arr[j])
            c[k++] = arr[i++];
        else
            c[k++] = arr[j++];
    }

    while (i <= mid)
        c[k++] = arr[i++];

    while (j <= h)
        c[k++] = arr[j++];

    for (k = l; k <= h; k++) {
        arr[k] = c[k];
    }
}

void MergeSort(int * arr, int l, int h) {
    int mid;
    if (l < h) {
        mid = (l + h) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}
int* closestNumbers(int arr_count, int* arr, int* result_count) {

    int k = 0, closest;
    MergeSort(arr, 0, arr_count - 1);
    res = malloc(arr_count * sizeof(int));
    closest = arr[1] - arr[0];
    for (int i = 0; i < arr_count - 1; i++) {
        if ((arr[i + 1] - arr[i]) < closest) {
            //res[k] = arr[i];
            //res[k + 1] = arr[i + 1];
            //k += 2;
            closest = arr[i + 1] - arr[i];
        }
    }
    for (int i = 0; i < arr_count - 1; i++) {
        if ((arr[i + 1] - arr[i]) == closest) {
            res[k] = arr[i];
            res[k + 1] = arr[i + 1];
            k += 2;
        }
    }
    *result_count = k;
    return res;
}
