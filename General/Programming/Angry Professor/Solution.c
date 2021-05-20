
char* angryProfessor(int k, int a_count, int* a) {
    int ontime = 0;
    for(int i = 0; i < a_count; i++){
        if(a[i] <= 0) {
            ontime++;
            if(ontime == k) 
              return "NO";
        }
    }
    return "YES";
}
