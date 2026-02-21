#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int id[n];
    for(int i=0;i<n;i++){
        scanf("%d",&id[i]);
    }
    int duplicate;
    for(int i=0;i<n;i++){
        duplicate=1;
        for(int j=0;j<i;j++){
            if(id[i]==id[j]){
                duplicate=0;
                break;
            }
        }
    
    if(duplicate==1){
        printf("%d ",id[i]);
    }
}
}