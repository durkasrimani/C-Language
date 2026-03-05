#include<stdio.h>
int main(){
    char str1[100],str2[50];
    fgets(str1,sizeof(str1),stdin);
    char *c=str1;
    char *p=str2;
    while(*c!='\0'){
    *p=*c;
    p++;
    c++;
    }
    *p='\0';
   printf("%s",str2);
    return 0;


}