//Write a program in C to add numbers using call by reference.



#include<stdio.h>
int sum(int *a,int *b){
    return *a+*b;




}

int main(){
    int a = 10;
    int b = 11;
    printf("%d",sum(&a,&b));
}
