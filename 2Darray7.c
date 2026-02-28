#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int arr[r][c];;
    int rowmin[r],colmax[c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   for(int i=0;i<r;i++){
    int min=arr[i][0];
    for(int j=0;j<c;j++){
        if(arr[i][j]<min){
            min=arr[i][j];
        }
    }
   rowmin[i]=min;
   }
   for(int j=0;j<c;j++){
    int max=0;
    for(int i=0;i<r;i++){
        if(arr [i][j]>max){
            max=arr[i][j];
        }
    }
    colmax[j]=max;
}
int count=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(rowmin[i]==colmax[j]){
            count++;
        }
        
    }
}
printf("%d",count);
return 0;
   
}