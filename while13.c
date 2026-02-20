#include<stdio.h>
int main(){
    int ATM_cash,n,withdraw,i=0,count=0,total=0;
    scanf("%d %d",&ATM_cash,&n);
    while(i<n){
        scanf("%d",&withdraw);
        if(withdraw<=ATM_cash){
            ATM_cash-=withdraw;
            count++;
        }
        else{
            break;
        }
        i++;

    }
    printf("Successful Withdrawls: %d\n",count);
    printf("Remaining Cash: %d",ATM_cash);

}