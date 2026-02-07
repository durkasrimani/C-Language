#include<stdio.h>
int main(){
    int cartvalue;
    scanf("%d",&cartvalue);
    if(cartvalue>=499){
        printf("Free Delivery");
    }
    else{
        printf("Delivery charges apply");
    }
    return 0;
}