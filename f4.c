#include<stdio.h>
float area(int n){
    float circle=(3.14*n*n);
    return circle;
}
int main(){
    int n;
    scanf("%d",&n);
    float circle=area(n);
    printf("%.2f",circle);
    return 0;
}