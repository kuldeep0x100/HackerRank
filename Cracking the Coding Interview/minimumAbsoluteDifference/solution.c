int c[1024 * 1024 * 10];

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

int minimumAbsoluteDifference(int arr_count, int* arr) {
    int min = abs(arr[1] - arr[0]);
    MergeSort(arr, 0, arr_count-1);
    for (int i = 1; i < arr_count; i++) {
        min = (min > abs(arr[i + 1] - arr[i])) ? abs(arr[i + 1] - arr[i]) : min;
    }
    return min;
}
