#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    int i=0;
    int count=0;
    for(i=0;a[i]!='\0'&&a[i]!='\n';i++){
        if(a[i]==' '){
            count++;
        }
    }
    printf("%d",count+1);
    return 0;
}