//Write a program to read the values of coefficients a, b and c of a

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x,y;
    printf("Enter the value of the coefficients a,b,c of the equation: ax2+bx+c=0:");
    scanf("%f%f%f",&a,&b,&c);
    x = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    y = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("Roots of the equations are:%.2f,%.2f",x,y);

    return 0;
    getch();



}


