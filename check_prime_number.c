#include<stdio.h>
int check(int);

int main()
{
	int n, c;
	printf("Enter any integer: ");
	scanf("%d", &n);
	
	c=check(n);
	
	if(c==1)
	{
		printf("%d is prime number.", n);
	}
	else
	{
		printf("%d is composite number.", n);
	}
	
	return 0;
}

int check(int n)
{
	int count=0, i;
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
		return 1;
	
	else
		return 0;
}
