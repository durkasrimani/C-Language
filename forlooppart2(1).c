#include<stdio.h>
int main(){
    int n,expenses,i,sum=0,count;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&expenses);
        if(expenses>1000){
            count++;
        }
        sum=sum+expenses;
    }
    printf("Total Expense: %d\n",sum);
    printf("Overspend Days: %d",count);
    return 0;

}