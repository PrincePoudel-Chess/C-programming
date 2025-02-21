#include<stdio.h>
#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /

int main()
{
	int x, y, z;
	char ch;
	printf("x: ");
	scanf("%d", &x);
	
	printf("\ny: ");
	scanf("%d", &y);
	
	printf("\nEnter operations(+, -, *, /): ");
	scanf(" %c", &ch);
	
	if(ch=='+')
	{
		z=x PLUS y;
		printf("\nThe sum is %d.", z);
	}
	else if(ch=='-')
	{
		z=x MINUS y;
		printf("\nThe difference is %d.", z);
	}
	else if(ch=='*')
	{
		z=x MULT y;
		printf("\nThe product is %d.", z);
	}
	else if(ch=='/')
	{
		z=x DIVIDE y;
		printf("\nThe division is %d.", z);
	}
	else
	{
		printf("\nEnter valid operators.");
	}
	
	return 0;
}
