#include<stdio.h>
int main(){
    int n,amount,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&amount);
        sum=sum+amount;
    }
    if(sum>=10000){
        printf("Limit Exceeded");
    }
    else{
        printf("Approved");
    }
    return 0;
}