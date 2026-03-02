#include<stdio.h>
int interest(int P,int T,int R){
    int value=((P*T*R)/100);
    return value;
}



int main(){
    int P,T,R;
    scanf("%d %d %d",&P,&T,&R);
    float value=interest(P,T,R);
    printf("%.2f",value);
    return 0;
}