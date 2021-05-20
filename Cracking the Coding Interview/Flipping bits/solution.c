long flippingBits(long n) {
    for(int i = 0; i < 32; i++){
        n ^= 1 << i;
    }
    return (unsigned)n;
}
