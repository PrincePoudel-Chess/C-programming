#include<stdio.h>



int main(){
    int n =2,i,j;
    int pascal[7][7] = {0};

    pascal[0][0]=1;
    pascal[1][0]=1;
    pascal[1][1]= 1;
    while(n<=7){
            pascal[n][0]=1;
            for(i =1;i<n;i++){

                pascal[n][i] = pascal[n-1][i-1]+pascal[n-1][i];}
            pascal[n][n]=1;

            n+=1;



            }
    for(i=0;i<7;i++){
        for(j =0;j<=i;j++){

            printf("  %d",pascal[i][j]);

        }
        printf("\n");
    }



}
