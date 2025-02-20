//Write a program in C to find the maximum number between two numbers using a pointer.


#include<stdio.h>

int max(int *a,int *b){
    int maxi;
    if(*a>*b){maxi = *a;}
    else{maxi = *b;}
    return maxi;
}


int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The greatest is : %d",max(&a,&b));
    return 0;
    getch();






}
