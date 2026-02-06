#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    ++a;
    printf("Pre:%d",a);
    printf("Post:%d",a);
    a++;
    return 0;
}