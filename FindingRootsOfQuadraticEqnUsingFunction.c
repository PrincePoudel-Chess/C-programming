//Finding the roots of a quadratic equation

#include<stdio.h>
#include<math.h>

void func(float a,float b,float c);
int main(){
	float a,b,c;
	printf("Enter the values of Quadratic Equation:");
	scanf("%f %f %f",&a,&b,&c);
	func(a,b,c);
	return 0;
	getch();
}

void func(float a,float b,float c){
	float x1,x2;
	x1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);
	x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);
	printf("%.2f %.2f",x1,x2);
}

