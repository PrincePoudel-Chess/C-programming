//Write a program in C to find the sum of digits of a number using recursion.


#include<stdio.h>

int sum(int n,int c){
    int i = 0;
    if(n>0){
        i = n%10;

        c = c+i;
        n = n/10;
        return sum(n,c);
        }
    return c;




}
int main(){int c=0,n;
    printf("Enter a positive number:");

    scanf("%d",&n);
    if(n>=0){printf("The sum of the digits:%d",sum(n,c));}
    else{printf("The number is not positive.");}
    getch();
    return 0;




}
