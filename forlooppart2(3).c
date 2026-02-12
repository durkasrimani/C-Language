#include<stdio.h>
int main(){
    int n,units,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&units);
        sum=sum+units;
    }
    printf("Total Units: %d",sum);
    return 0;
}