int res[2] = {0};
int* breakingRecords(int scores_count, int* scores, int* result_count) {
    int max, min;
    max = min = scores[0]; 
    
    for(int i = 1; i < scores_count; i++){
        if(scores[i] > max){
            max = scores[i]; res[0]++;
        }
        if(scores[i] < min){
            min = scores[i]; res[1]++;
        } 
    }
    *result_count = 2;
    return res;
}
