#include<stdio.h>
int main()
{
	int var1, var2, var3;
	printf("Enter var1: ");
	scanf("%d", &var1);
	
	printf("\nEnter var2: ");
	scanf("%d", &var2);
	
	printf("\nSwapping value without third variable: ");
	
	var1=var1+var2;
	var2=var1-var2;
	var1=var1-var2;
	
	printf("\nvar1: %d\nvar2: %d", var1, var2);
	
	return 0;
}
