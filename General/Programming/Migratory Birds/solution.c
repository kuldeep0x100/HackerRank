int bird_cnt[6]={0};
int migratoryBirds(int arr_count, int* arr) {
    int i, max;
    for(i = 0; i < arr_count; i++)
        bird_cnt[arr[i]]++;
    
    for(i = 1, max = bird_cnt[0]; i < 6; i++)
      max =  bird_cnt[i] > max?bird_cnt[i]:max;
    
     for(i = 0; i < 6; i++){
         if(bird_cnt[i] == max)
            break;
     }
     return i;
}
