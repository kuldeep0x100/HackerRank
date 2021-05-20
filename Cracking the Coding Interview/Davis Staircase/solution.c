int arr[36] = { 0 };
int stepPerms(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    if (arr[n] != 0) return arr[n];
    else {
        arr[n] = stepPerms(n - 1) + stepPerms(n - 2) + stepPerms(n - 3);
        return arr[n];
    }
}

