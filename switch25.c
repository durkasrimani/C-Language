#include<stdio.h>
int main(){
    int category;
    scanf("%d",&category);
    switch(category){
        case 1:
        printf("Rs.%d",1200);
        break;
        case 2:
        printf("Rs.%d",800);
        break;
        case 3:
        printf("Rs.%d",500);
        break;
        default:
        printf("invalid");
    }
    return 0;
}