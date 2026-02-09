#include<stdio.h>
int main(){
    int seat_type,time;
    scanf("%d %d",&seat_type,&time);
    switch(seat_type){
        case 1:
        if(time>=18){
            printf("Ticket Price Rs.%d",150+50);
        }
        else{
            printf("Ticket Price Rs.%d",150);
        }
        break;
        case 2:
        if(time>=18){
            printf("Ticket Price Rs.%d",250+50);
        }
        else{
            printf("Ticket Price Rs.%d",250);
        }
        break;
        default:
        printf("Invalid");
    }
    return 0;

}