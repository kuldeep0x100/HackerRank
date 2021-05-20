int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
    /*
    * Write your code here.
    */
    int max = 0, i,    j;
    for (i = 0; i < keyboards_count; i++) {
        for (j = 0; j < drives_count; j++) {
            if (keyboards[i] + drives[j] <= b) {
                max = (keyboards[i] + drives[j]) > max ? (keyboards[i] + drives[j]) : max;
            }
        }
    }
    if (max == 0) return -1;
    return max;
}
