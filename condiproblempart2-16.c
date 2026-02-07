#include<stdio.h>
int main(){
    int waterlevel;
    scanf("%d",&waterlevel);
    if(waterlevel>90){
        printf("Overflow Warning");
    }
    else{
        printf("Safe Level");
    }
    return 0;
}