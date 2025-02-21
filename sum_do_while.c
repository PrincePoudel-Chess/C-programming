#include<stdio.h>
int main()
{
	int num, sum=0, temp;
	printf("Enter a digit: ");
	scanf("%d", &num);
	
	do
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;	
	}while(num);
	
	printf("\nsum of digits: %d", sum);
	return 0;
}
