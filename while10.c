#include<stdio.h>
int main(){
    int n,delay,i=0,count=0,total=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&delay);
        total+=delay;
        if(delay>2){
            count++;
        }
        i++;
    }
    printf("Total Delay: %d\n",total);
    printf("Delayed Days: %d",count);
    return 0;
}