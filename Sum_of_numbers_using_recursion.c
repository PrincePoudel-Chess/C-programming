
//Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include<stdio.h>

int sum(int n,int k,int i){

    i = i+k;
    k += 1;
    if(k<=n){return sum(n,k,i);}
    else{return i;}



}

int main(){
    int k = 1;
    int n;
    int i = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of sumbers:%d",sum(n,k,i));
    getch();
    return 0;







}


