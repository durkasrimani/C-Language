#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    int valid=0;
    fgets(a,sizeof(a),stdin);
    int i=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>='A'&&a[i]<='Z'){
            valid=1;
        }
    }
    if(valid){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
return 0;
}