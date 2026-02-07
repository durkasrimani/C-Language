#include<stdio.h>
int main(){
    int temperature;
    scanf("%d",&temperature);
    if(temperature<=18){
        printf("Heating Mode");
    }
    else if(temperature>=19 && temperature<=25){
        printf("Normal Mode");
    }
    else{
        printf("Cooling Mode");
    }
    return 0;
}