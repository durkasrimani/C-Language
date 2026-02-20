#include<stdio.h>
int main(){
    int fuel,n,i=0,consumed_fuel,count=0;
    scanf("%d %d",&fuel,&n);
    while(i<n){
        scanf("%d",&consumed_fuel);
        if(consumed_fuel<=fuel){
        fuel-=consumed_fuel;
        count++;
    }
        else{
            break;
        }
        i++;
    }
    printf("Completed Trips: %d\n",count);
    printf("Remaining Fuel: %d",fuel);
}