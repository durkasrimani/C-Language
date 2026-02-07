#include<stdio.h>
int main(){
    float data;
    scanf("%f",&data);
    if(data>2.0){
        printf("Data limit exceeded");
    }
    else{
        printf("Data within the limit");
    }
    return 0;
}