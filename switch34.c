#include<stdio.h>
int main(){
    int plan_type;
    scanf("%d",&plan_type);
    switch(plan_type){
        case 1:
        printf("Speed %d Mbps",40);
        break;
        case 2:
        printf("Speed %d Mbps",100);
        break;
        case 3:
        printf("Speed %d Mbps",300);
        break;
        default:
        printf("invalid");
    }
    return 0;
}