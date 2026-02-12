#include<stdio.h>
int main(){
    int n,daily_usage,i,sum=0,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&daily_usage);
        if(daily_usage>2){
            count++;
        }
        sum=sum+daily_usage;
    }
    printf("Total Data: %d\n",sum);
    printf("High Usage Days: %d",count);
    return 0;
}