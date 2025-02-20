

#include<stdio.h>
int fibo(int a,int b,int n){
    int temp;
    printf("%d ",a);
    temp = b;
    b = a;
    a = temp;
    n = n-1;
    if(n>1){return fibo(a+b,b,n);}




}

int main(){int n=15;
    fibo(0,1,n);




}
