#include<stdio.h>
int main(){
    int vehicle_type,parking_hours;
    scanf("%d %d",&vehicle_type,&parking_hours);
    switch(vehicle_type){
        case 1:
        if(parking_hours>=0 && parking_hours<=24){
            printf("Rs.%d",parking_hours*10);
        }
        break;
        case 2:
        if(parking_hours>=0 && parking_hours<=24){

            printf("Rs.%d",parking_hours*20);
        }
        break;
        default:
        printf("Rs.%d",parking_hours*20);
    }
    return 0;
}