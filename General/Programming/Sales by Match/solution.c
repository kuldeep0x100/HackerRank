int stock_cnt[101] = {0};

int sockMerchant(int n, int ar_count, int* ar) {
    int tot = 0;
    for(int i = 0; i < ar_count; i++)
        stock_cnt[ar[i]]++;
        
    for(int i = 0; i < 101; i++)
        tot += (stock_cnt[i]/2);
    return tot;
}

