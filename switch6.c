#include<stdio.h>
int main(){
    int acc_type,years;
    scanf("%d %d",&acc_type,&years);
    switch(acc_type){
        case 1:
        printf("Interest 4%%");
        break;
        case 2:
        if(years<=3){
            printf("Interest 5%%");
        }
        else{
            printf("Interest 7%%");
        }
        break;
        default:
        printf("invalid");

    }
    return 0;
}