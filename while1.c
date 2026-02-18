#include<stdio.h>
int main(){
    int n,noise_level,count=0,i=0,streak=0,max=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&noise_level);
        if(noise_level>70){
            count++;
            streak++;
            if(streak > max){
                max = streak;
            }}
        else{
            streak = 0;
    }
    i++;
}
    printf("Noise Violation: %d",count);
    printf("Longest Violation Streak: %d",max);
    return 0;
}