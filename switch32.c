#include<stdio.h>
int main(){
    int violation_type;
    scanf("%d",&violation_type);
    switch(violation_type){
        case 1:
        printf("Fine Rs.%d",1000);
        break;
        case 2:
        printf("Fine Rs.%d",1500);
        break;
        case 3:
        printf("Fine Rs.%d",2000);
        break;
        default:
        printf("invalid");
    }
    return 0;
}