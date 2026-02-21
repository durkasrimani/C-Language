#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sales[n];
    int first=0,second=0;
    for(int i=0;i<n;i++){
        scanf("%d",&sales[i]);
    }
    int increasing=1;
    for(int i=0;i<n;i++){
        if(sales[i]>=sales[i+1]){
           increasing=0;
           break;
    }

}
    if(increasing){
        printf("Yes");
    }
    else{
        printf("No");
    }
    }
