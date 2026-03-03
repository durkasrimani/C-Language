#include<stdio.h>
int GCD(int a,int b){
    int gcd=1;
    for(int i=1;i<=a&&i<=b;i++){
            if(a%i==0 && b%i==0){
                gcd=i;
                }
               
            }
             return gcd;
        }
    

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=GCD(a,b);
    printf("%d",c);

    return 0;
}
