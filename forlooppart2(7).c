#include<stdio.h>
int main(){
    int n,rainfall,i,sum=0,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&rainfall);
        if(rainfall>50){
            count++;
        }
        sum=sum+rainfall;
    }
    printf("Total Rainfall: %d\n",sum);
    printf("Heavy Rain Days: %d",count);
    return 0;
}