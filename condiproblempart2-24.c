#include<stdio.h>
int main(){
    int length;
    scanf("%d",&length);
    if(length<=5){
        printf("Invalid Email");
    }
    else{
        printf("Valid Email");
    }
    return 0;
}