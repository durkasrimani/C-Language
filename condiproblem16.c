#include<stdio.h>
int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3 && s1==s3){
        printf("Equilateral triangle");
    }
    else{
        printf("Not an equilateral triangle");
    }
    return 0;
}