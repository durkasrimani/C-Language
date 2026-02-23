#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int orders[n];
    for(int i=0;i<n;i++){
        scanf("%d",&orders[i]);
    }
    int index=0;
    for(int i=0;i<n;i++){
        if(orders[i]!=0){
            orders[index]=orders[i];
            index++;
        }
    }
    while(index<n){
        orders[index]=0;
        index++;

    }
    for(int i=0;i<n;i++){
        printf("%d ",orders[i]);
    }
    return 0;

}