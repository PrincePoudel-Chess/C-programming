#include<stdio.h>
#include<conio.h>

int main(){
    int num1,num2,k,lcm,c,d;
    scanf("%d %d",&num1,&num2);
    c = num1;
    d = num2;
    while(num2!=0){
        k = num2;
        num2 = num1%num2;
        num1 = k;}
    printf("The HCF is %d",num1);
    printf("\n The LCM is:");
    lcm = (c*d)/num1;
    printf("%d",lcm);
    getch();
    return 0;




}
