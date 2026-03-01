#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    fgets(a,sizeof(a),stdin);
    int i=0;
    int count=0;
    for(i=0;a[i]!='\0'&&a[i]!='\n';i++){
        if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'){
            if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='O'&&a[i]!='U'&&a[i]!='I'){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}