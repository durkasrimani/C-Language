#include<stdio.h>
int main(){
    int units,type;
    scanf("%d %d",&type,&units);
    switch(type){
        case 1:
        if(units<=100){
            printf("Bill Rs.%d",(units*3)-80);
        }
        else{
            printf("Bill Rs.%d",((100*3)+(units-100)*5-80));
        }
        break;
        case 2:
        if(units<=100){
            printf("Bill Rs.%d",units*7);
        }
        else{
            printf("Bill Rs.%d",((100*7)+(units-100)*10));
        }
        break;
        default:
        printf("invalid");

    }
}