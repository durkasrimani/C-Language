#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int expense[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&expense[i][j]);
        }
    }
    int sum[r];
    int min=0;
    for(int i=0;i<r;i++){
        sum[i]=0;
        for(int j=0;j<c;j++){
            sum[i]+=expense[i][j];
        }
    }
   
int max=0;
    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            int sub=sum[i] - sum[j];
        if(sub<0){
            sub=-sub;
        }
        if(sub>max){
            max=sub;
        }
    }
}
 printf("%d",max);
 return 0;
}
