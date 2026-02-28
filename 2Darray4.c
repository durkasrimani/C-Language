#include<stdio.h>
int main(){
    int r,c,i,j,k=0;
    scanf("%d %d",&r,&c);
    int transaction[r][c],b[r*c];
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&transaction[i][j]),b[k++]=transaction[i][j];
        }
    }
    for(int i=0;i<r*c;i++){
        for(int j=i+1;j<r*c;j++){
            if(b[i]==b[j]){
                printf("%d",b[i]);
                return 0;

            }
        }
    }
    return 0;
    
    }
    
