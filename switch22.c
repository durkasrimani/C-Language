#include<stdio.h>
int main(){
    int connection_type,units;
    scanf("%d %d",&connection_type,&units);
    switch(connection_type){
        case 1:
        if(units<=30){
            printf("Rs.%d",units*5);
        }
        else{
            printf("Rs.%d",((30*5)+(units-30)*8));
        }
        break;
        case 2:
        printf("Rs.%d",units*10);
        break;
        default:
        printf("Invalid");
        break;
    }
    return 0;
}