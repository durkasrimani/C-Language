#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=(n*2+1);j++){
            if(i<j && j<((n*2)+1-i)){
                printf("  ");
            }
            else{
            printf("* ");}
        }
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(j=0;j<=(n*2+1);j++){
            if((n-i)<j && j<n+i+1){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
         printf("\n");
    }
    return 0;
}