/*3. Program to find sum and average of two numbers*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2, sum;
	float average;
	
	printf("Enter number 1: ");
	scanf("%d", &num1);
	
	printf("\nEnter number 2: ");
	scanf("%d", &num2);
	
	sum= num1+num2;
	average=(float)sum/2;
	
	printf("\nThe sum is %d.", sum);
	printf("\nThe average is %.2f.", average);
	
	getch();
	return 0;
}
