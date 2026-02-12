#include<stdio.h>
int main(){
    int n,fuel_price,i,count=0,highest;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&fuel_price);
        if(fuel_price>highest){
        highest=fuel_price;}
        
        if(fuel_price>100){
        count++;
    }
    }
    printf("Highest Price: %d\n",highest);
    printf("High Price Days: %d",count);
    return 0;
    
}