#include<stdio.h>
void table(int n){
    for(int i=1;i<=10;i++){
        int a=n*i;
        printf("%d*%d=%d\n",n,i,a);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    table(n);
    return 0;
}