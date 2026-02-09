#include<stdio.h>
int main(){
    int course_type;
    scanf("%d",&course_type);
    switch(course_type){
        case 1:
        printf("Certificate Fee Rs.%d",0);
        break;
        case 2:
        printf("Certificate Fee Rs.%d",500);
        break;
        default:
        printf("invalid");
    }
    return 0;
}