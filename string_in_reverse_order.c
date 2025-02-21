#include<stdio.h>

int rev(char[]);

int main()
{
	char str[100];
	printf("Enter any string: ");
	gets(str);
	
	rev(str);
	return 0;
}

int rev(char str[])
{
	int i=0, len;
	char temp;
	
	for(len=0; str[len]!='\0'; len++);
	
	for(i=0; i<len/2; i++)
	{
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
	
	printf("The string in reverse order is %s", str);
}

