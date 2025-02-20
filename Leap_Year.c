//Write a program to check whether the entered year is leap year or
//not (a year is leap if it is divisible by 4 and divisible by 100 or 400.)
#include<stdio.h>


void main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100 != 0))||(year%400)==0){ printf("Leap Year.");}
    else {printf("Not_a_Leap_Year");}
    getch();





}
