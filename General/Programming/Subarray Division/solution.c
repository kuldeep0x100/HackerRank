int birthday(int s_count, int* s, int d, int m) {
    int k = 0, tot = 0, cnt = 0;
    for(int i = 0; i < s_count; i++){
        k = i; tot = 0;
        while(k < (m + i))
            tot += s[k++];
    
        if(tot == d)  cnt++ ;          
    }
    return cnt;
}
