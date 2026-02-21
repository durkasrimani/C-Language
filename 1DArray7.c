#include<stdio.h>
int main(){
    int n,even=0,odd=0;
    scanf("%d",&n);
    int day[n];
    for(int i=0;i<n;i++){
        scanf("%d",&day[i]);
    }
    for(int i=0;i<n;i++){
        if(day[i]%2==0){
            even++;
        }
        else{
            odd++;

        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d",odd);

}