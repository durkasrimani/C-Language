#include<stdio.h>
int main(){
    int R,C,i,j,highest=0,maxhighest=0,smallest=0,fullsmallest=0;
    scanf("%d %d",&R,&C);
    int matrix[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            scanf("%d ",&matrix[i][j]);
        }
    }
    for(int i=0;i<R-1;i++){
        for(int j=0;j<C;j++){
            if(matrix[i][j]>highest){
                highest=matrix[i][j];
            }
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(matrix[i][j]>maxhighest){
                maxhighest=matrix[i][j];
            }
        }
    }
    for(int i=0;i<R-1;i++){
        for(int j=0;j<C;j++){
            if(matrix[i][j]<smallest){
                smallest=matrix[i][j];
            }
        }
    }
    for(int i=1;i<R;i++){
        for(int j=0;j<C;j++){
            if(matrix[i][j]<fullsmallest){
                fullsmallest=matrix[i][j];
            }
        }
    }
    int max=highest*maxhighest;
    int min=smallest*fullsmallest;
    if(max>min){
        printf("%d",max);
    }
    else{
        printf("%d",min);
    }
    return 0;
}