#include<stdio.h>
int main(){
    int n,patients_per_day,i,sum=0,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&patients_per_day);
        if(patients_per_day>100){
            count++;
        }
        sum=sum+patients_per_day;
    }
    printf("Total Data: %d\n",sum);
    printf("High Usage Days: %d",count);
    return 0;
}