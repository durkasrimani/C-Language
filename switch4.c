#include<stdio.h>
int main(){
    int cls,age;
    scanf("%d %d",&cls,&age);
    switch(cls){
        case 1:
        if(age<12){
            printf("Fare Rs.%d",300-(300*50/100));
        }
        else if(age>=60){
            printf("Fare Rs.%d",300-(300*33/100));
        }
        else{
            printf("no discount");
        }
        break;
        case 2:
        if(age<12){
            printf("Fare Rs.%d",100-(100*50/100));
        }
        else{
            printf("No disccount");
        }
        break;
        default:
        printf("invalid");
    }
    return 0;
}