#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%7==0){
        printf("Multiplied of both 3 and 7");
    }
    else{
        printf("Not Multiplied of both 3 and 7");
    }
    return 0;
}