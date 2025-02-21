#include<stdio.h>
int main()
{
	int x=2, z=4, y;
	y=x++ + ++x;
	printf("y=%d", y);
	return 0;
}
