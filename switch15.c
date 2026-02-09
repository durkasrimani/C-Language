#include<stdio.h>
int main(){
    int course_mode;
    char student_category;
    scanf("%d",&course_mode);
    scanf(" %c",&student_category);
    switch(course_mode){
        case 1:
        if(student_category=='R'){
            printf("Rs.5000");
        }
        else if(student_category=='S'){
            printf("Rs.3000");
        }
        break;
        case 2:
        if(student_category=='R'){
            printf("Rs.9000");
        }
        else if(student_category=='S'){
            printf("Rs.7000");
        }
        break;
        default:
        printf("invalid");
    }
    return 0;
}