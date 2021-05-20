int hurdleRace(int k, int height_count, int* height) {
int max_height = 0;
for(int i = 0; i < height_count; i++)
    max_height = max_height > height[i]? max_height : height[i];

if(k > max_height) return 0;
return(max_height - k);
}
