#include<stdio.h>



int main(){



    int sum =1;
    int i,j;
    for(i=5;i>0;i--){

        for(j=0;j<i;j++){
            printf("%5d",sum);
            sum += 2;


        }
        printf("\n");



    }

    getch();
    return 0;






}
