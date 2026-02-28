#include<stdio.h>
int main(){
    int r,c,i,j,max=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<r-1;i++){
        int sum=0;
        for(int j=0;j<c-1;j++){
            sum=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
        }
        
        if(sum>max){
            max=sum;
        }
    }
        printf("%d\n",max);
    }
