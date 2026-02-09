#include<stdio.h>
int main(){
    int doctor_type;
    scanf("%d",&doctor_type);
    switch(doctor_type){
        case 1:
        printf("Consultation Fee Rs.%d",500);
        break;
        case 2:
        printf("Consultation Fee Rs.%d",1200);
        break;
        default:
        printf("invalid");
    }
    return 0;
}