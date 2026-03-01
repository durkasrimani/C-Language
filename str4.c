#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    int i=0;
    int len=strlen(a);
    for(i=len-2;a[i]>0;i--){
        printf("%c",a[i]);
    }
    return 0;
}