#include<stdio.h>
int main(){
    int size,element;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&element);
    int *p=arr;
    for(int i=0;i<size;i++){
        if(*(p+i)==element){
            printf("%d",i+1);
        }
    }
return -1;
}