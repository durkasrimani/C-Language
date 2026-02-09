#include<stdio.h>
int main(){
    int flight_class,extra_baggage_weight;
    scanf("%d %d",&flight_class,&extra_baggage_weight);
    switch(flight_class){
        case 1:
        if(extra_baggage_weight>=1 && extra_baggage_weight<=20){
            printf("Rs.%d",extra_baggage_weight*300);
        }
        break;
        case 2:
        if(extra_baggage_weight<=3){
            printf("free");
        }
        else{
            printf("Rs.%d",((extra_baggage_weight-3)*300));
        }
        break;
        default:
        printf("invalid");
    }
    return 0;
}