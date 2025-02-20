#include<stdio.h>
int func(){
     register int a = 9;
     a= a+1;
     return a;


}

int main(){
   printf("\n%d",func());
   printf("\n%d",func());






}
