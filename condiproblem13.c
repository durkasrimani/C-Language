#include<stdio.h>
int main(){
    char letters;
    scanf("%c",&letters);
    if(letters>='A' && letters<='Z'){
        printf("UPPER cASE");
    }
    else if(letters>='a' && letters<='z'){
        printf("lower case");
    }
    else{
        printf("Invalid");
    }
    return 0;
}