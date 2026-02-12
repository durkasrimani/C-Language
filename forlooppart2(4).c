#include<stdio.h>
int main(){
    int n,absentdays,i,reduce=0;
    scanf("%d",&n);
    scanf("%d",&absentdays);
    for(i=1;i<=absentdays;i++){
        n=n-100;
    }
    printf("Final Salary: Rs.%d",n);
    return 0;
}