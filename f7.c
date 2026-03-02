#include<stdio.h>
void prime(int n){
    int flag=1;
    if(n<=1){
       flag=0;
    }
   else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=0;
            }
        }
    }
    if(flag==0){
        printf("Not a prime");
    }
    else{
        printf("prime");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    prime(n);


    return 0;
}