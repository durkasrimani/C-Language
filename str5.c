#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    int palindrome=1;
    int i=0;
    int len=strlen(a);
    int j=len-2;
    while(i<j&&a[i]!='\0'&&a[i]!='\n'){
        if(a[i]!=a[j]){
            palindrome=0;
            break;
        }
            i++;
            j--;
        
    }
    if(palindrome){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
 
    return 0;
}