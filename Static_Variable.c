#include<stdio.h>

int func(){
     static int a = 10;
    a--;
    return a;



}
int main(){
    printf("\n%d",func());
    printf("\n%d",func());printf("\n%d",func());




}
