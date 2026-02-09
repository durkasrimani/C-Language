#include<stdio.h>
int main(){
    int vehicle_category,vehicle_age;
    scanf("%d %d",&vehicle_category,&vehicle_age);
    switch(vehicle_category){
        case 1:
        if(vehicle_age>=0 && vehicle_age<=20){
            if(vehicle_age<=5){
                printf("Rs.%d",1500);
            }
            else{
                printf("Rs.%d",2500);
            }
            break;
        }
        case 2:
        if(vehicle_age>=0 && vehicle_age<=20){
            if(vehicle_age<=5){
                printf("Rs.%d",4000);
            }
            else{
                printf("Rs.%d",6000);
            }
            break;
        }
        default:
        printf("invalid");
    }
    return 0;
}