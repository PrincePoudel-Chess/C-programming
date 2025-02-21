#include<stdio.h>
int main()
{
	int n, i, sum_even=0, product_odd=1;
	printf("How many numbers you want to input?\n");
	scanf("%d", &n);
	
	int num[n];
	for(i=0; i<n; i++)
	{
		printf("\nEnter %d number: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(num[i]%2==0)
		{
			sum_even+=num[i];
		}
		
		else
		{
			product_odd*=num[i];
		}
	}
	
	printf("\nsum of even numbers: %d", sum_even);
	printf("\nproduct of odd numbers: %d", product_odd);
	
	return 0;
}
