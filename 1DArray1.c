#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int salary[n];
    for(int i=0;i<n;i++){
        scanf("%d",&salary[i]);
    }
    int largest=0,second_largest=0;
    for(int i=0;i<n;i++){
        if(salary[i]>largest){
            second_largest=largest;
            largest=salary[i];
        }
        else if(salary[i]>second_largest && salary[i]!=largest){
            second_largest=salary[i];
        }
    }
     printf("%d",second_largest);
   
}