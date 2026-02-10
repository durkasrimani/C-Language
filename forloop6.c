#include<stdio.h>
int main(){
   int n,i,prdt=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    prdt=prdt*i;
   }
   printf("%d",prdt);
   return 0;
}