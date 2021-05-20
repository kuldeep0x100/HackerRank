int utopianTree(int n) {
    int val = 1;
    for(int i = 1; i <= n; i++){
        if(i & 1) val = val << 1;
        else val += 1;
    }
    return val;
}
