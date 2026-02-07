#include<stdio.h>
int main(){
    int speed;
    scanf("%d",&speed);
    if(speed<=80){
        printf("within speed limit");
    }
    else{
        printf("speed limit exceeded");
    }
    return 0;
}