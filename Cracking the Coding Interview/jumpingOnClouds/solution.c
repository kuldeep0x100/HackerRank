int jumpingOnClouds(int c_count, int* c) {
    int jumps = -1;
    for(int i = 0; i < c_count; ){
        if(c[i] == 1) { /*Check for safe landing*/
            i--; continue;
        }
        else{
               jumps++; 
               if((c_count - i) == 2) i++; /*Check for last item in the seq.*/
               else i+=2;
        }
    }
    return jumps;
}
