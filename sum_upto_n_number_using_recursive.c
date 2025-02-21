#include<stdio.h>
int sum(int);

int main()
{
	int n, s;
	printf("Upto which number you want a sum?\t");
	scanf("%d", &n);
	
	s=sum(n);
	
	printf("\nSum: %d", s);
}

int sum(int n)
{
	if(n>=1)
	{
		return n+sum(n-1);
	}
}
