#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>65&&a<90 || a>97&&a<122){
        printf("Alpha");
    }
    else if(a>1&&a<64 || a>90&&a<97){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}