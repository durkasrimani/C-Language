#include<stdio.h>
#include<ctype.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    int i=0;
    for(i=0;a[i]!='\0'&&a[i]!='\n';i++){
        if(isupper(a[i])){
            a[i]=tolower(a[i]);
        }
        else if(islower(a[i])){
            a[i]=toupper(a[i]);
        }
    }
    printf("%s",a);
    return 0;
    
}