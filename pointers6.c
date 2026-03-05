#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    for(int i=size-1;i>=0;i--){
        printf("%d ",*(p+i));
    }
    return 0;
}
