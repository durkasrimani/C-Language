#include<stdio.h>
int main(){
    int n,sum=0,total=0;
    scanf("%d",&n);
    int roll[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&roll[i]);
    }
    for(int i=0;i<=n;i++){
        total+=i;
    }
    for(int i=0;i<n-1;i++){
        sum+=roll[i];
    }
    printf("%d\n",total-sum);
    

}