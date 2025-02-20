#include<stdio.h>



int main(){
    int a[3][2];
    int b[3][2];
    int c[3][2];
    int i;
    int j;

    for(i = 0;i<3;i++){
        for(j = 0;j<2;j++){
            printf("Enter the a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);}

    }

    printf("\nFor matrix b\n\n\n");
    for(i = 0;i<3;i++){
        for(j = 0;j<2;j++){
            printf("Enter the b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);}

    }
    for(i = 0;i<3;i++){
        for(j = 0;j<2;j++){
            c[i][j] = a[i][j]+b[i][j];}
            }


    for(i = 0;i<3;i++){
        for(j = 0;j<2;j++){
            printf("\nc[%d][%d] = %d",i,j,c[i][j]);

    }


}

getch();
    return 0;
}
