#include<stdio.h>
void perfect(int n){
    int sum=0,flag=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
       sum+=i;
        }
}
if(sum==n){
    printf("Perfect number");
}
else{
    printf("Not Perfect Number");
}

}

int main(){
    int n;
    scanf("%d",&n);
    perfect(n);
    return 0;
}