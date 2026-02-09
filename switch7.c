#include<stdio.h>
int main(){
    int room_type;
    char season;
    scanf("%d",&room_type);
    scanf(" %c",&season);
    switch(room_type){
    case 1:
    if(season=='A'){
        printf("Rs.2500");
    }
    else if(season=='B'){
        printf("Rs.2000");
    }
    else{
        printf("invalid");
    }
    break;
    case 2:
    if(season=='C'){
        printf("Rs.4000");
    }
    else if(season=='D'){
        printf("Rs.3000");
    }
    else{
        printf("invalid");
    }
    break;
    default:
    printf("invalid");
    break;

    }
    return 0;

}