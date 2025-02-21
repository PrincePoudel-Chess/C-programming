#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,cube;
	printf("Enter a number");
	scanf("%d",&n);
	cube=pow(n,3);
	printf("The cube of %d is %d",n,cube);
	getch();
	return 0;
}

