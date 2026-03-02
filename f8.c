#include<stdio.h>
int reverse(int n){
    int result=0;
    if(n<0){
        n=-n;
    }
    while(n!=0){
        int reminder=n%10;
        result=result*10+reminder;
        n=n/10;
    }
    return result;
}
int main(){
    int n;
    scanf("%d",&n);
    int a=reverse(n);
    printf("%d",a);
    return 0;
}