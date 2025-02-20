
#include<stdio.h>
#include<conio.h>

int main(){


    for(int i = 1;i<=4 ;i++){
            for(int j = 1;j<=i;j++){
                printf("*\t");
    }
        printf("\n");
    }

    for(int m = 1;m<=3 ;m++){
            for(int k = 3;k>=m;k--){
                printf("*\t");
    }
        printf("\n");
    }

    getch();
    return 0;

}
