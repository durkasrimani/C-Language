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
    int index=0;
    for(int i=0;i<r;i++){
        int prdt=1;
        for(int j=0;j<c;j++){
            prdt*=arr[i][j];
        }
    int max=0;
    if(prdt>max){
        max=prdt;
        index=i;
    }}
    printf("%d",index);
    return 0;
}