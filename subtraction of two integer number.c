/*2. C program to find subtraction of two integer number*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2, difference;
	printf("Enter number 1: ")
	scanf("%d",&num1);
	
	printf("\nEnter number 2: ");
	scanf("%d", &num2);
	
	difference=num1-num2;
	printf("\nThe subtraction between two numbers is %d", difference);
	
	getch();
	return 0;
}
