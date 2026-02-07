#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("Weekday");
        break;
        case 2:
        printf("Weekday");
        break;
        case 3:
        printf("Weekday");
        break;
        case 4:
        printf("Weekday");
        break;
        case 5:
        printf("Weekday");
        break;
        case 6:
        printf("Weekend");
        break;
        case 7:
        printf("Weekend");
        break;
        default:
        printf("invalid");
    }
    return 0;
}