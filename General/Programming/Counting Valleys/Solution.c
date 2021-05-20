int countingValleys(int steps, char* path) {
    int valley = 0, sl = 0;
    for(int i = 0; i < steps; i++){
        if(path[i] == 'U') sl++;
        else if(path[i] == 'D') sl--;
        if((sl == 0) && path[i] == 'U') valley++;
    }
    return (valley);
}
