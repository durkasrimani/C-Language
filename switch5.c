#include<stdio.h>
int main(){
    int plan,payment;
    scanf("%d %d",&plan,&payment);
    switch(plan){
        case 1:
        if(payment==11 || payment==12){
            printf("Pay Rs.%d",199-20);
        }
        else if(payment==13){
            printf("No Cashback");
        }
        break;
        case 2:
        if(payment==11 || payment==12){
            printf("Pay Rs.%d",399-20);
        }
        else if(payment==13){
            printf("No cashback");
        }
        break;
        default:
        printf("invalid");
        break;
    }
    return 0;
}