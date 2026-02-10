#include<stdio.h>
int main(){
    int n,i,count=0,digit;
    scanf("%d",&n);
    for(;n>0;n/=10){
        digit=n%10;
        if(digit%2==0){
            count++;
    }
}
    printf("%d",count);
    return 0;
}
