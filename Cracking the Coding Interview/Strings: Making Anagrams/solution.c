int makeAnagram(char* a, char* b) {
   
    int del = 0, i;
    int cnt1[ALPH_CNT] = {0};
    int cnt2[ALPH_CNT] = {0};

    for (i = 0; i < strlen(a); i++)
        cnt1[a[i] - 'a']++;

    for (i = 0; i < strlen(b); i++)
        cnt2[b[i] - 'a']++;

    for (i = 0; i < ALPH_CNT; i++)
        del += abs(cnt1[i] - cnt2[i]);

    return del;
}
