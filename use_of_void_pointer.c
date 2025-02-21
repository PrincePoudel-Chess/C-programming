#include<stdio.h>

// using the concept of void pointer same pointer can point to variables of different data types
int main()
{
	int a=99;
	double b=3.33;
	void *vptr;
	
	vptr = &a;
	
	printf("a=%d", (*(int*)vptr)); // changing void pointer to integer data types
	
	
	vptr=&b;
	printf("\nb=%lf", (*(double*)vptr)); // changing void pointer to double data types
	
	return 0;
}
