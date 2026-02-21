#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int shift[n];
    for(int i=0;i<n;i++){
        scanf("%d",&shift[i]);
    }
    int k;
     printf("k=");
    scanf("%d",&k);
   
    for(int i=k;i<n;i++){
        printf("%d ",shift[i]);
    }
    for(int i=0;i<k;i++){
        printf("%d ",shift[i]);
    }
    return 0;
}