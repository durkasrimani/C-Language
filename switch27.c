#include<stdio.h>
int main(){
    int delivery_mode;
    scanf("%d",&delivery_mode);
    switch(delivery_mode){
        case 1:
        printf("Rs.%d",40);
        break;
        case 2:
        printf("Rs.%d",120);
        break;
        case 3:
        printf("Rs.%d",0);
        break;
        default:
        printf("invalid");
    }
    return 0;
}