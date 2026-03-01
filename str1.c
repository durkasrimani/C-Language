#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
   int length=0;
   while(a[length]!='\0'&&a[length]!='\n'){
    length++;
    

   }
   
   printf("%d",length);
   return 0;
    

}