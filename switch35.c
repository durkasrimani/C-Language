#include<stdio.h>
int main(){
    int fuel_type,litres;
    scanf("%d %d",&fuel_type,&litres);
    switch(fuel_type){
        case 1:
        printf("Fuel Cost Rs.%d",litres*105);
        break;
        case 2:
        printf("Fuel Cost Rs.%d",litres*92);
        break;
        case 3:
        printf("Fuel Cost Rs.%d",litres*85);
        break;
        default:
        printf("invalid");
    }
    return 0;
}