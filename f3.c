#include<stdio.h>
void oddeven(int n){
    if(n%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}


int main(){
    int n;
    scanf("%d",&n);
    oddeven(n);
  

    return 0;
}