#include<stdio.h>
int main(){
    int acctype,bal,withdraw;
    scanf("%d %d %d",&acctype,&bal,&withdraw);
    switch(acctype){
        case 1:
        if(bal>withdraw){
            printf("Transaction Successful");
        }
        else{
            printf("Not successful");
        }
        break;
        case 2:
        if(withdraw==5000){
            printf("Limit not exceeded");
        }

        else{
            printf("Limit exceeded");
        }
        break;
        default:
        printf("invalid");
        break;
    }
    return 0;
}