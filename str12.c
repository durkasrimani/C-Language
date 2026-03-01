#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    int i=0,count=0;
    for(i=0;a[i]!='\0'&&a[i]!='\n';i++){
        if(!(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]>='1'&&a[i]<='9')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}