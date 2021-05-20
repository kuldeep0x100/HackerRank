int alternatingCharacters(char* s) {
int cnt = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == s[i + 1])
            cnt++;
    }
    return cnt;
}
