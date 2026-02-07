#include<stdio.h>
int main(){
    int percentage;
    scanf("%d",&percentage);
    if(percentage>=75){
        printf("Eligible for exam");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}