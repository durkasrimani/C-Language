#include<stdio.h>
int sum(int n){
    int add=0;
    for(int i=0;i<=n;i++){
        add+=i;
    }
    return add;

}
int main(){
    int n;
    scanf("%d",&n);
    int a=sum(n);
    printf("%d",a);
    return 0;
}