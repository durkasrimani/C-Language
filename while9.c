#include<stdio.h>
int main(){
    int n,hours,i=0,count=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&hours);
        if(hours==0){
           
         count++;
        }
        i++;
    }
        printf("Inactive Weeks: %d\n",count);
        if(count>n/2){
            printf("Risk Status: High");
        }
        else{
            printf("Risk Status: Low");
        }


    }

