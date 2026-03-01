#include<stdio.h>
#include<string.h>
int main(){
char a[50];
char b[50];
fgets(b,sizeof(b),stdin);
int i=0;
while(b[i]!='\0'){
    a[i]=b[i];
    i++;

}
a[i]='\0';
printf("%s",a);
return 0;

}
