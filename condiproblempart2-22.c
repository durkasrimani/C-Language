#include<stdio.h>
int main(){
    int seat;
    scanf("%d",&seat);
    if(seat>0){
        printf("Confirmed");
    }
    else{
        printf("Waiting List");
    }
    return 0;
}