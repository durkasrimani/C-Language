#include<stdio.h>
int main(){
    int plan;
    scanf("%d",&plan);
    float data_used;
    scanf("%f",&data_used);
    switch(plan){
    case 1:
    if(data_used>=0.0 && data_used<=5.0){
        if(data_used<=1.0){
            printf("Normal Speed");
        }
        else{
            printf("Speed Reduced");
        }
    }
    break;
    case 2:
    if(data_used>=0.0 && data_used<=5.0){
        if(data_used<=2.0){
            printf("Normal Speed");
        }
        else{
            printf("Extra Charges Applied");
        }
    }
    break;
    default:
    printf("invalid");
    break;
}
    return 0;
}