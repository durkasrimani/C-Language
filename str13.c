#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    char n;
    int occur=0;
    scanf("%c",&n);
    int i=0,count=0;
    for(i=0;a[i]!='\0'&&a[i]!='\n';i++){
        if(a[i]==n){
            occur=1;
            count++;

        }
    }
    if(occur){
    printf("%d",count);
    }
    else{
        printf("%d",-1);
    }
    return 0;

    
}