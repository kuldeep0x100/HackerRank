int pairs(int k, int arr_count, int* arr) {
    int tot = 0;
    int i = 0, j = 1;

    for (i = 0, j = 1; i < arr_count; i++, j = i + 1) {
        while (j < arr_count) {
            if ((abs(arr[i] - arr[j])) == k)
                tot++;
            j++;
        }
    }
    return tot;
}
