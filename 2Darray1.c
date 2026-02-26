#include<stdio.h>
int main(){
    int R,C,i,j;
    scanf("%d %d",&R,&C);
    int salary[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
             scanf("%d",&salary[i][j]);

        }
    }
    int highest=salary[0][0],second_highest=salary[0][0];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(salary[i][j]>highest){
                second_highest=highest;
                highest=salary[i][j];
            }
            else if(salary[i][j]>second_highest && salary[i][j]!=highest){
                second_highest=salary[i][j];
            }
        }
    }
    printf("%d ",second_highest);
    return 0;

   

}