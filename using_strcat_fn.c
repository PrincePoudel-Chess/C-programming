#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	strcat(str1,str2);
	printf("The concatenated string is %s",str1);
	return 0;
	
}
