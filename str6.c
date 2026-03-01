#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    int i=0;
    int count=0;
    for(int i=0;a[i]!='\0'&&a[i]!='\n';i++){
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}