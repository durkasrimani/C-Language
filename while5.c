#include<stdio.h>
int main(){
    int i=1,n,successful_and_cancelled,successful=0,cancelled=0,max=0,min=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&successful_and_cancelled);
        if(successful_and_cancelled==1){
            successful++;
        }
        else{
            cancelled++;
        }
        if(successful>max){
            max=successful;
        }
        else if(cancelled>min){
            min=cancelled;
        }
        i++;
    }
   
    printf("Successful: %d\n",max);
    printf("Cancelled: %d\n",min);
     if(successful>cancelled){
        printf("Status: Safe");
    }
    else{
        printf("Status: Risk");
    }
    return 0;
}