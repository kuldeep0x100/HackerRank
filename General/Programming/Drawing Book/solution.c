int pageCount(int n, int p) {
int res;

if(n == p) return 0;

if(p <= n/2)
    res = p >> 1;
else {
    res = (n - p)/2;
    if((res == 0) && ((n % 2) == 0))
        res = 1;
}   
return res;
}
