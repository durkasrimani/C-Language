#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    int i=0;
    for(int i=0;a[i]!='@'&&a[i]!='\0'&&a[i]!='\n';i++){
        printf("%c",a[i]);
 }
  return 0;
}