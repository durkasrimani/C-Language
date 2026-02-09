#include<stdio.h>
int main(){
    int loan_type,score;
    scanf("%d %d",&loan_type,&score);
    switch(loan_type){
        case 1:
        if(score>=300 && score<=900){
            if(score>=700){
                printf("Approved");
            }
            else if(score>=650 && score<=699){
                printf("Manual Review");
            }
            break;
        }
        case 2:
        if(score>=300 && score<=900){
            if(score<700){
                printf("Rejected");
            }
            else{
                printf("Approved");
            }
            break;
        }
        default:
        printf("invalid");
    }
    return 0;
}