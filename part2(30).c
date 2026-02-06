#include<stdio.h>
int main(){
    int a,val=0;
    scanf("%d",&a);
    while(a>0){
        val+=a&1;
        a=a>>1;
    }
    printf("%d",val);
    return 0;
}