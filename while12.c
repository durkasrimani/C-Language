#include<stdio.h>
int main(){
    int data_pack,n,daily_usage,i=0,count=0;
    scanf("%d %d",&data_pack,&n);
    while(i<n){
        scanf("%d",&daily_usage);
        if(daily_usage<=data_pack){
            data_pack-=daily_usage;
            count++;
        }
        else{
            break;
        }
        i++;

    }
    printf("Exhausted Day: %d\n",count);
    printf("Overused Data: %d",data_pack);

}