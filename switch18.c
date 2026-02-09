#include<stdio.h>
int main(){
    int attempt_number,marks;
    scanf("%d %d",&attempt_number,&marks);
    switch(attempt_number){
        case 1:
        if(marks>=0 && marks<=100){
            if(marks>=80){
                printf("Excellent");
            }
            else{
                printf("Not Qualified");
            }
        }
        break;
        case 2:
        if(marks>=60){
            printf("Good");
        }
        else{
            printf("Not Qualified");
        }
        break;
        default:
        printf("Needs Improvement");
    }
    return 0;
}