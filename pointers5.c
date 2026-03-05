#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
   
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
     int *p=arr;
    for(int i=0;i<size;i++){
        sum+=*(p+i);
    }
    printf("%d",sum);
    return 0;
}