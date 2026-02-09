#include<stdio.h>
int main(){
    int call_type,minutes;
    scanf("%d %d",&call_type,&minutes);
    switch(call_type){
        case 1:
        printf("Rs.%d",minutes*1);
        break;
        case 2:
        printf("Rs.%d",minutes*3);
        break;
        case 3:
        printf("Rs.%d",minutes*10);
        break;
        default:
        printf("invalid");
    }
    return 0;
}