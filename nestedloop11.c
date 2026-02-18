#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n,s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(s=0;s<n-i-1;s++){
            printf("  ");
        }
        for(j=0;j<i*2+1;j++){
            printf("%d ",1+(i-(abs(i-j))));
        }
        
        printf("\n");
    }
    return 0;
}