#include<stdio.h>
int main(){
    int hours;
    scanf("%d",&hours);
    if(hours<=1){
        printf("Short Interruption");
    }
    else if(hours>1 && hours<=4){
        printf("Medium Interruption");
    }
    else{
        printf("Long Interruption");
    }
    return 0;
}