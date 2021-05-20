long calc_sum_int(long num) {
    long sum = 0;
    while (num >= 9)
    {
        sum += (num % 10);
        num /= 10;
    }
    return(sum += num);
}

long compute_super_digit(long num) {

    long tot;
    tot = calc_sum_int(num);

    if (tot <= 9)
        return tot;
    else 
        tot = compute_super_digit(tot);
    return tot;
}

long calc_sum(char* a) {
    long sum = 0, i = 0;
    while (a[i] != '\0') {
        sum += (a[i] - '0');
        i++;
    }
    return sum;
}
int superDigit(char* n, int k) {
    long total = 0;
    char buf[1024] = { '0' };
     //while (k--)
    //    total += calc_sum(n);

    total = calc_sum(n) * k;

    if (total <= 9)
        return total;
    else {
        //sprintf(buf, "%ld", total);
        total = compute_super_digit(total);
    }
    return total;
}

