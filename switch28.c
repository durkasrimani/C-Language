#include<stdio.h>
int main(){
    int room_type;
    scanf("%d",&room_type);
    switch(room_type){
        case 1:
        printf("Rs.%d",80000);
        break;
        case 2:
        printf("Rs.%d",60000);
        break;
        case 3:
        printf("Rs.%d",45000);
        break;
        default:
        printf("invalid");
    }
    return 0;
}