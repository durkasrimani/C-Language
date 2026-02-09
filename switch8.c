#include<stdio.h>
int main(){
    int code,experience,s1,s2;
    s1=50000;
    s2=35000;
    scanf("%d %d",&code,&experience);
    switch(code){
        case 1:
        if(experience<3){
            printf("Salary Rs.%d",s1);
        }
        else{
            printf("Salary Rs.%d",(s1+(experience*5000)));
        }
        break;
        case 2:
        if(experience<3){
            printf("Salary Rs.%d",s2);
        }
        else{
            printf("Salary Rs.%d",(s2+(experience*5000)));
        }
        break;
    }
    return 0;
}