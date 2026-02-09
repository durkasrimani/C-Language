#include<stdio.h>
int main(){
    int delayed_days;
    scanf("%d",&delayed_days);
    if(delayed_days<=5){
            printf("Rs.%d",delayed_days*50);
        }
        else if(delayed_days>5 && delayed_days<=10){
            printf("Rs.%d",delayed_days*100);
        }
        else{
            printf("Rs.%d",delayed_days*200);
        }
    return 0;
}