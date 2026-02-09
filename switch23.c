#include<stdio.h>
int main(){
    int customer_type,bill_amounts;
    scanf("%d %d",&customer_type,&bill_amounts);
    switch(customer_type){
        case 1:
        printf("Rs.%d",(bill_amounts-(bill_amounts*5/100)));
        break;
        case 2:
        printf("Rs.%d",(bill_amounts-(bill_amounts*15/100)));
        break;
        default:
        printf("invalid");
        return 0;
    }
}