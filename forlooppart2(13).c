#include<stdio.h>
int main(){
    int n,errors,i,sum=0,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&errors);
        if(errors>50){
            count++;
        }
        sum=sum+errors;
    }
     printf("Total Errors: %d\n",sum);
     printf("Critical Hours: %d",count);
     return 0;
}