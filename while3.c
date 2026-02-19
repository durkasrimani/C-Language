#include<stdio.h>
int main(){
    int n,i=0,total_data,count=0,daily_usage,remaining;

    scanf("%d %d",&total_data,&n);  

    remaining = total_data;

    while(i <= n-1 && remaining > 0){   
        scanf("%d",&daily_usage);

        if(daily_usage <= remaining){
            remaining -= daily_usage;
        }
        count++;   
        i++;
    }

    printf("Days Used: %d\n",count);
    printf("Remaining Data: %dGB",remaining);

    return 0;
}
