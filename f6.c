#include<stdio.h>
int factorial(int n){
    int prdt=1;
    for(int i=1;i<=n;i++){
        prdt*=i;
        
    }
    return prdt;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int a=factorial(n);
    printf("%d",a);
    return 0;
}