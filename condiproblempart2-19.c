#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=85){
        printf("Distinction");
    }
    else if(marks<=84 && marks>=55){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}