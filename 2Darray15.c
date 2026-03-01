#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int n=arr[i][j];
            int flag=1;
            if(n<=1){
                flag=0;
            }
            for(int k=2;k*k<=n;k++){
                if(n%k==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                count++;
            }
            }
        }
        printf("%d",count);
    }

