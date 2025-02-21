#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, k, fact=1, terms=10, num;
	float y=1;
	
	for(i=1; i<=terms; i++)
	{
		if(i==1 || i==4 || i==6 || i==8 || i==9 || i==10)
		{
			int fact=1;
			for(j=1; j<=i; j++)
			{
				fact=fact*j;
			}
			y+=pow(i, 2)/fact;
		}
	}
	
	printf("Sum of series is %f.", y);
	return 0;
}
