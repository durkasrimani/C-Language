#include<stdio.h>
int main(){
    int a,Positive,Negative,Zero;
    scanf("%d",&a);
    (a>0)? printf("Positive"):(a<0)? printf("Negative"):printf ("Zero");
    return 0;
}
