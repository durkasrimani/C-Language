#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=10 && a<=20){
        printf("Number is within the range");
    }
    else{
        printf("Number is out of range");
    }
    return 0;
}