#include<stdio.h>
int main(){
    int years;
    scanf("%d",&years);
    if(years<=1){
        printf("Under Warranty");
    }
    else if(years<=2){
        printf("Limited Warranty");
    }
    else{
        printf("Out of Warranty");
    }
    return 0;
}