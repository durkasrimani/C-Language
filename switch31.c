#include<stdio.h>
int main(){
    int duration_time;
    scanf("%d",&duration_time);
    switch(duration_time){
        case 1:
        printf("Rs.%d",1500);
        break;
        case 3:
        printf("Rs.%d",4000);
        break;
        case 6:
        printf("Rs.%d",7000);
        break;
        default:
        printf("invalid");
    }
    return 0;
}