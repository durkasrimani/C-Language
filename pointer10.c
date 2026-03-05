#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    
      fgets(str1,sizeof(str1),stdin);
       str1[strcspn(str1,"\n")]='\0';
      char *p=str1;
      int count=0;
      while(*p!='\0'){
        if(*p!=' '&& (*(p+1)==' '||*(p+1)=='\0')){
            count++;
        }
            p++;

        
      }
      printf("%d",count);
      return 0;
}
   
   