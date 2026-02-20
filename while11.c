#include<stdio.h>
int main(){
    int n,power_usage,i=0,count=0,total=0,max=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&power_usage);
        if(power_usage>max){
            max=power_usage;
        }
        if(power_usage>5){
            count++;
        }
        i++;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d",count);
    return 0;
}