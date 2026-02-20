#include<stdio.h>
int main(){
    int n,paid_missed,streak=0,max_streak=0,i=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&paid_missed);
        if(paid_missed==0){
            streak++;
        }
       if(streak>max_streak){
        max_streak=streak;
       }
       else{
        streak=0;
       }
        i++;
    }
    printf("Longest Default Streak: %d",max_streak);
    return 0;
}