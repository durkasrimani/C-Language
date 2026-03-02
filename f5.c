#include<stdio.h>
int digitsum(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int checksum=digitsum(n);
    printf("%d",checksum);
    return 0;
}