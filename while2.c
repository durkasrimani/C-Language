#include<stdio.h>
int main(){
    int n,initial_balance,daily_transaction,i=0,count=0;
    scanf("%d %d",&n,&initial_balance);
    while(i<=n-1){
        scanf("%d",&daily_transaction);
        initial_balance+=daily_transaction;
        if(initial_balance<=2000){
            count++;
        }
        i++;
    }
    printf("Final Balance: %d\n",initial_balance);
    printf("Low Balance Days: %d",count);
}