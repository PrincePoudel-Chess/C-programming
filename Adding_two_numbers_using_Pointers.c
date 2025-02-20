
// Write a program in C to add two numbers using pointers.

#include<stdio.h>


int main(){
    int *a;
    int *b;
    int m;
    int n;
    scanf("%d",&m);
    scanf("%d",&n);
    a = &m;
    b = &n;
    printf("The sum is:%d",*a+*b);





}
