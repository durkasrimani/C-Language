#include<stdio.h>
int main(){
    int n,working_and_failed,i=1,streak=0,max=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&working_and_failed);
        if(working_and_failed==0){
            streak++;
        }
        else{
            streak=0;
        }
        if(streak>max){
            max=streak;
        }
        i++;
    }
    printf("Longest Failure Streak: %d",max);
    return 0;
}