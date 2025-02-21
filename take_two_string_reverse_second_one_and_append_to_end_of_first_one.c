#include<stdio.h>
void strop(char[], char[]);
int main()
{
	char str1[100], str2[100];
	
	printf("Enter two strings: ");
	gets(str1);
	gets(str2);
	
	strop(str1, str2);
	
	return 0;
}

void strop(char str1[], char str2[])
{
	int len1, len2, i, j;
	char temp;
	
	for(len1=0; str1[len1]!='\0'; len1++);
	
	for(len2=0; str2[len2]!='\0'; len2++);
	
//	printf("%d%d", len1, len2);
	
	for(i=0; i<len2/2; i++)
	{
		temp=str2[i];
		str2[i]=str2[len2-i-1];
		str2[len2-i-1]=temp;
	}
	
	int len=len1+len2;
	char str[len];
	
	for(i=0; i<len1; i++)
	{
		str[i]=str1[i];
	}
	
	for(i=len1, j=0; i<(len1+len2); i++, j++)
	{
		str[i]=str2[j];
	}
	
	str[len]='\0';
	
	printf("\nThe string after reverse and append is %s.", str);
}
