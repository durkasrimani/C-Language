#include<stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
   
    int prices[n];
    for(int i=0;i<n;i++){
        scanf("%d",&prices[i]);
    }
     scanf("%d",&sum);
    printf("sum=",sum);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(sum==prices[i]+prices[j]){
                printf("%d %d",prices[i],prices[j]);
                return 0;
            }

        }
    }
    printf("No pair");
    return 0;

}