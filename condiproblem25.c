#include<stdio.h>
int main(){
    int choice,a,b;
    scanf("%d %d %d",&choice,&a,&b);
    switch(choice){
        case 1:
        printf("Sum=%d",a+b);
        break;
        case 2:
        printf("Difference=%d",a-b);
        break;
        case 3:
        printf("Multiplication=%d",a*b);
        break;
        case 4:
        if(b==0){
            printf("undefined value");
        }
        else{
            printf("Division=%d",a/b);
        }
        break;
        case 5:
        printf("Modulus=%d",a%b);
        break;
        default:
        printf("invalid");
    }
    return 0;
}