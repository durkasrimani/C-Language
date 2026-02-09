#include<stdio.h>
int main(){
    int vehicle_type,distance;
    scanf("%d %d",& vehicle_type,&distance);
    switch(vehicle_type){
        case 1:
        printf("Rs.%d",distance*10);
        break;
        case 2:
        printf("Rs.%d",distance*15);
        break;
        case 3:
        printf("Rs.%d",distance*20);
        break;
        default:
        printf("invalid");
    }
    return 0;
}