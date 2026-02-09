#include<stdio.h>
int main(){
    int user_role,login_time;
    scanf("%d %d",&user_role,&login_time);
    switch(user_role){
        case 1:
        printf("Full access anytime");
        break;
        case 2:
        if(login_time>=9 && login_time<=18){
            printf("Limited Access");
        }
        else{
            printf("Access Denied");
        }
        break;
        default:
        printf("Invalid");
    }
    return 0;
}