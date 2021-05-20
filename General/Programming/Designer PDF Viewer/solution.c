int designerPdfViewer(int h_count, int* h, char* word) {
    int max = 0;
    for(int i = 0; i < strlen(word); i++)
        max = h[word[i] - 'a'] > max?h[word[i] - 'a'] : max;
    return(max * strlen(word));
}

