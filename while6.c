#include<stdio.h>
int main(){
    int capacity,n,admission_discharge,beds=0,i=0,threshold=0,count=0;
    scanf("%d %d",&capacity,&n);
    threshold=0.9*capacity;
    while(i<n){
        scanf("%d",&admission_discharge);
        beds+=admission_discharge;
        if(beds>threshold){
            count++;
        }
        i++;
    }
    
    printf("Final Occupied Beds: %d\n",beds);
    printf("Critical Hours: %d",count);
    return 0;
    
}