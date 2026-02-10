#include<stdio.h>
int main(){
    int n,i;
    int count=0;
    scanf("%d",&n);
    for(i=1;n>0;n/=10){
        count++;
    }
    printf("%d",count);
    return 0;
}