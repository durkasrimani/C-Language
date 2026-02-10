#include<stdio.h>
int main(){
    int n,i,sum=0,rem;
    scanf("%d",&n);
    for(i=1;n!=0;n/=10){
        rem=n%10;
        sum=sum+rem;
    }
    printf("%d",sum);
    return 0;
}