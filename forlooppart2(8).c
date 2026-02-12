#include<stdio.h>
int main(){
    int n,daily_loss,i,sum=0,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&daily_loss);
        if(daily_loss>100){
            count++;
        }
        sum=sum+daily_loss;
    }
    printf("Total Rainfall: %d\n",sum);
    printf("Heavy Rain Days: %d",count);
    return 0;
}