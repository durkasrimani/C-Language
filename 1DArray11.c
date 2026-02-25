#include<stdio.h>
int main(){
    int n,total=0;
    scanf("%d",&n);
    int expenses[n];
    for(int i=0;i<n;i++){
        scanf("%d",&expenses[i]);
        total+=expenses[i];
    }
    int i=0;
    int leftsum=0;
    int rightsum=0;
    for(int i=0;i<n;i++){
       rightsum=total-leftsum-expenses[i];
    
    if(leftsum==rightsum){
        printf("%d",i);
        return 0;
    }
    leftsum+=expenses[i];
}
printf("-1");
return 0;
}
