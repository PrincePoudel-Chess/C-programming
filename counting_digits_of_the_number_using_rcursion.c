

//Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>

int count(int n,int c){
    if(n>0){

        c+=1;
        n = n/10;
        return count(n,c);
        }
    return c;




}
int main(){int c = 0,n;
    printf("Enter a positive number:");

    scanf("%d",&n);
    if(n>=0){printf("The total digits:%d",count(n,c));}
    else{printf("The number is not positive.");}
    getch();
    return 0;






}
