#include<stdio.h>
int main(){
    int vehicle_type,trips;
    scanf("%d %d",&vehicle_type,&trips);
    switch(vehicle_type){
        case 1:
        if(trips>=0 && trips<=30){
            if(trips==1){
                printf("Rs.%d",100);
            }
            else if(trips>=2 && trips<=10){
                printf("Rs.%d",800);
            }
            else{
                printf("Rs.%d",800);
            }
        }
        break;
        case 2:
        if(trips>=0 && trips<=30){
            printf("Rs.%d",trips*240);
        }
        else{
            printf("invalid");
        }
        break;
        default:
        printf("invalid");
    }
    return 0;


}