/*
Write a program to initialize one dimensional array of size 8 and
display the sum and average of array elements.
*/

#include<stdio.h>
int main()
{
	float num[8], sum=0, average;
	int i;
	for(i=0; i<8; i++)
	{
		printf("Enter %d number: ", i+1);
		scanf("%f", &num[i]);
		printf("\n");
	}
	
	for(i=0; i<8; i++)
	{
		sum=sum+num[i];
	}
	
	average=sum/8;
	
	printf("\nSum: %.2f", sum);
	printf("\nAverage: %.2f", average);
	
	return 0;
}
