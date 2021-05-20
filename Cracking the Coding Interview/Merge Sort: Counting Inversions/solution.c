#define COUNT_IVERSION 1

#ifdef COUNT_IVERSION
long inversions = 0;
#endif

int c[1024 * 1024 * 10];

/*
* Complete the 'countInversions' function below.
*
* The function is expected to return a LONG_INTEGER.
* The function accepts INTEGER_ARRAY arr as parameter.
*/
void merge(int *arr, int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    int k = l;
    //int *c;

    //if(h != 0)
    //    c = (int*)malloc(sizeof(int) * h);
    //else
    //    c = (int*)malloc(sizeof(int));
    //int c[1024];
    
    //memset(c, 0, sizeof(c));
    while ((i <= mid) && (j <= h)) {
        if (arr[i] <= arr[j]) {
            c[k++] = arr[i++];        
        }
        else {
            c[k++] = arr[j++];
            #ifdef COUNT_IVERSION
            /*Check for Inversions*/
            inversions += ((mid + 1) - i);
            #endif    
        }
    }

    while (i <= mid)
        c[k++] = arr[i++];

    while (j <= h)
        c[k++] = arr[j++];

    for (k = l; k <= h; k++) {
        arr[k] = c[k];
        //printf("%d ", arr[k]);
    }
    //printf("\n");
    //free(c);
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
long countInversions(int arr_count, int* arr) {

    #ifdef COUNT_IVERSION
    inversions = 0;
    #endif
    arr_count--;
    MergeSort(arr, 0, arr_count);
    //merge(arr, l, mid, h);
    return inversions;
}

