#include<stdio.h>


int main(){int m,n;
    char a[10] = "Prince";
    char b[10] = "Poudel";
    char result[30];
    int i,j;
    i = strlen(a);
    j = strlen(b);

    int sum = i+j;
    for(m=0;m<i;m++){
            result[m] = a[m];}
    for(int n = i;n<sum;n++){
            result[n] = b[n-i];

    }
    printf("The sum is:%s",result);


}
