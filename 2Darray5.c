#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int department[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&department[i][j]);
        }
    }
    int minavg;
    int avg;
    int index=0;
    int sum=0;
    for(int j=0;j<c;j++){
        
        sum+=department[0][j];
    }
    minavg=sum/c;
    for(int i=1;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=department[i][j];
        }
        avg=sum/c;
        if(minavg> avg){
            minavg=avg;
            index=i;
        }
}
printf("%d",index);
    }
   