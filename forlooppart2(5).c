#include<stdio.h>
int main(){
    int battery_percent,n,sum=0,battery_drain,i;
    scanf("%d %d",&battery_percent,&n);
    for(i=1;i<=n;i++){
        scanf("%d",&battery_drain);
        sum=sum+battery_drain;
    }
    
    battery_percent=battery_percent-sum;
    printf("Remaining Battery: %d",battery_percent);
    return 0;
}