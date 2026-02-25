#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int performance[n];
    for(int i=0;i<n;i++){
        scanf("%d",&performance[i]);
    }
    int max=performance[n-1];
    printf("%d",max);
    for(int i=n-2;i>=0;i--){
        if(performance[i]>max){
            max=performance[i];
            printf(" %d ",max);

        }
    }
  
    return 0;
   
}