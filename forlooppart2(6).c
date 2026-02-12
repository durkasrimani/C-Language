#include<stdio.h>
int main(){
    int n,ticketfare,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ticketfare);
        sum=sum+ticketfare;
    }
    printf("Total Collection: Rs.%d",sum);
    return 0;
}