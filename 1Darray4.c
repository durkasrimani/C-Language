#include<stdio.h>
int main(){
    int n,b;
    scanf("%d",&n);
    int stops[n];
    for(int i=0;i<n;i++){
        scanf("%d",&stops[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",stops[i]);
       
    }
   
}