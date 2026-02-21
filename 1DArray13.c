#include<stdio.h>
int main(){
    int n,sum=0,avg;
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
        sum+=marks[i];
    }
    avg=sum/n;
    int i=0,count=0;
    for(int i=0;i<n;i++){
    if(marks[i]>avg){
        count++;
    }
}
   printf("%d",count);
    return 0;
}
