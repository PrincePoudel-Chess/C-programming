#include<stdio.h>

int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];

    int i;
    int j;
    int k ;

    //Initializing matrix C to Zero
    for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            c[i][j] = 0;
    }}



    //For Matrix A
    for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            printf("Enter the a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);}

    }

    printf("\nFor matrix b\n\n\n");
    for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            printf("Enter the b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);}

    }

    for(i =0;i<3;i++){
        for(j = 0;j<3;j++){
                for(k = 0;k<3;k++){

                    c[i][j] += a[i][k]*b[k][j];


                }





        }}


    for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            printf("\nc[%d][%d]:%d",i,j,c[i][j]);

    }





    }










}
