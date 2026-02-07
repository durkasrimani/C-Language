#include<stdio.h>
int main(){
    int user_type_number;
    scanf("%d",&user_type_number);
    switch (user_type_number)
    {
    case 1:
        printf("Admin");
        break;
        case 2:
        printf("User");
        break;
        case 3:
        printf("Guest");
        break;
        default:
        printf("invalid");
        break;
    }
    return 0;
}