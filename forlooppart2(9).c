#include<stdio.h>
int main(){
    int n,marks,i,sum=0,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&marks);
        if(marks<40){
            count++;
        }
        sum=sum+marks;
    }
    printf("Average Score: %d\n",sum/n);
    printf("Failed Suubjects: %d",count);
    return 0;
}