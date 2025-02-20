#include<stdio.h>

int powcheck(int n){
    int count=0;

    //for(i=n;i>=1;i--)
    while(n>1) {



        if((n%2)!=0){count +=1;}
        n = n/2;


    }
    return count;



}

int main(){
    int n;
    scanf("%d",&n);

    if(n == 0){printf("n is zero and not the power of 2");}
    else if(powcheck(n)==0){
            printf("Number is the power of 2.");}
    else{ printf("Number is not the power of 2.");}
    getch();
    return 0;






}
