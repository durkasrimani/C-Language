#include<stdio.h>
int main(){
     char opr;
    scanf("%c",&opr);
    int a,b;
    scanf("%d %d",&a,&b);
   
    switch (opr)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
    printf("%d",a-b);
    break;
    case '*':
    printf("%d",a*b);
    break;
    case '/':
    if(b==0){
        printf("Undefined value");
    }
    else{
        printf("%d",a/b);
    }
    break;
    
    default:
        printf("Invalid");
    }
    return 0;
}