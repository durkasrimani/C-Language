#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int score[r][c];
    int maxindex=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&score[i][j]);
        }
    }
   
    int maxcount=0;
    for(int i=0;i<r;i++){
        int uniquecount=0;
        for(int j=0;j<c;j++){
            int count=0;
            for(int k=0;k<c;k++){
                if(score[i][j]==score[i][k]){
                    count++;
                }
            }
            if(count==1){
                uniquecount++;
            }
        }
        if(uniquecount>maxcount){
            maxcount=uniquecount;
            maxindex=i;
        }
    }
    printf("%d",maxindex);
    return 0;
}