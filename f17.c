#include<stdio.h>
#include<math.h>
void amstrong(int n){
   int count=0,sum=0;
   int copy=n;
   for(copy=n;copy!=0;copy=copy/10){
    count++;
   }
   copy=n;
  while(copy!=0){
    int digit=copy%10;
    int power=1;
    for(int i=1;i<=count;i++){
        power*=digit;
    }
    sum+=power;
    copy=copy/10;
  }
  if(sum==n){
    printf("Amstrong");
  }
  else{
    printf("Not Amstrong");
  }
}
int main(){
    int n;
    scanf("%d",&n);
    amstrong(n);
    return 0;
}