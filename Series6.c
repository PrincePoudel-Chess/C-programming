//Printing the Series:
//           123454321
//            1234321
//             12321
//              121
//               1



#include<stdio.h>

void main(){
    int n = 0;
    for(int i=5;i>=1;i--){
        for(int j = 1;j<=i;j++){
            printf("%d",j);
        }
        for(int k = i-1;k>=1;k--){
                printf("%d",k);

        }
        printf("\n");

        for(int m = 0;m<=n;m++){
            printf(" ");
        }
        n +=1;
}

getch();
}
