#include<stdio.h>
int main()
{
	FILE *fptr;
	char c[40];
	fptr=fopen("stringc.txt", "w");
	
	printf("Enter any string: ");
	fgets(c, sizeof(c), stdin);
	fputs(c, fptr);
	
	fclose(fptr);
	return 0;
}
