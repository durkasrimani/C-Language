#include<stdio.h>
int main(){
   int attempt;
   scanf("%d",&attempt);
   if(attempt<=3){
    printf("Login Allowed");
   }
   else{
    printf("Account locked");
   }
    return 0;
}