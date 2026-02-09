#include<stdio.h>
int main(){
    int book_type,days_late;
    scanf("%d %d",& book_type,&days_late);
    switch(book_type){
        case 1:
        printf("Late Fee Rs.%d",days_late*2);
        break;
        case 2:
        printf("Late Fee Rs.%d",days_late*5);
        break;
        default:
        printf("invalid");
    }
    return 0;
}