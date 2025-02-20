//Write a program in C to print the first 50 natural numbers using recursion.]
#include<stdio.h>

int natural(int i){

    printf("\n%d",i);
    i += 1;
    if(i<=50){return natural(i);}
    else{return 0;}





}



int main(){
    int i = 1;
    natural(i);

    getch();
    return 0;




}


