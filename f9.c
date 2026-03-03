#include<stdio.h>
void palindrome(int n){
    int copy=n;
    int result=0,rem;
    if(copy<0){
        n=-n;
    }
    while(copy!=0){
        rem=copy%10;
        result=result*10+rem;
        copy=copy/10;
    }
    if(n==result){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    palindrome(n);

    return 0;
}