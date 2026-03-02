#include<stdio.h>
int digits(int n){
    int count=0;
    if(n==0){
        return 1;
    }
    if(n<0){
        n=-n;
    }
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int count=digits(n);
    printf("%d",count);
    return 0;
}