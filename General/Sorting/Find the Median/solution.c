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


int findMedian(int arr_count, int* arr) {
MergeSort(arr, 0, arr_count - 1);
return(arr[arr_count/2]);
}

