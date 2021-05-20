int c[1024 * 1024 * 10];
//int res[1024];
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
int pickingNumbers(int a_count, int* a) {
    int i = 0, j = 1, diff, res = 0, mx = 0;
    MergeSort(a, 0, a_count -1);
    while (j < a_count) {
        diff = a[j] - a[i];
        if (diff <= 1) {
            j++;
        }
        else {
            mx = j - i;
            res = mx > res ? mx : res;
            i = j;
            j += 1;
        }
    }

    mx = j - i;
    res = mx > res ? mx : res; 

    if (res >= 2)
        return res;
    else
        return 0;
}

