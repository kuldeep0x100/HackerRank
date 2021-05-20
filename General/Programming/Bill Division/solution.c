void bonAppetit(int bill_count, int* bill, int k, int b) {
    int tot = 0;
    while (--bill_count >= 0) tot += bill[bill_count];
    tot = tot / 2;
    tot = tot - (bill[k] / 2);
    if (tot == b) printf("Bon Appetit\n");
    else printf("%d\n", (b - tot));
}

