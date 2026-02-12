#include<stdio.h>
int main(){
    int n,daily_revenue,i,sum=0,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&daily_revenue);
        if(daily_revenue>50000){
            count++;
        }
        sum=sum+daily_revenue;
    }
     printf("Total Revenue: %d\n",sum);
     printf("Target Days: %d",count);
     return 0;
}