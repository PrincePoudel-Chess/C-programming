//Write a program that asks a number and test the number whether it

#include<stdio.h>


int main(){
    int a;
    printf("Enter the  Number:");
    scanf("%d",&a);
    if((a%5==0 && a%7 == 0)&&(a%11 != 0)){printf("Multiple of 5 and Divisible by 7 and Not divisible by 11.");}
    else if(a%5 !=0&& (a%7!= 0)&&(a%11!= 0)){printf("Not a Multiple of 5.");}

    else if((a%5 ==0) && (a%7!= 0)&&(a%11 != 0)){printf(" Multiple of 5 but not divisible by 7.");}
    else if(a%5 !=0&& (a%7 == 0)&&(a%11!= 0)){printf("Not a Multiple of 5 but divisible by 7.");}




}
