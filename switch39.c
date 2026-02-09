#include<stdio.h>
int main(){
    int distance;
    scanf("%d",&distance);
    if(distance<=5){
        printf("Transport Fee Rs.%d",800);
    }
    else if(distance>5 && distance<=10){
        printf("Transport Fee Rs.%d",1200);
    }
    else{
        printf("Transport Fee Rs.%d",1800);
    }
    return 0;
}