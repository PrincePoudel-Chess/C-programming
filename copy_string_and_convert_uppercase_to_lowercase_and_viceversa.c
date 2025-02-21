#include<stdio.h>

void copyy(char[]);

int main()
{
	char str[100], str2[100];
	printf("Enter any string: ");
	gets(str);
	
	printf("\nString before copied: %s", str);
	
	copyy(str);
	
	
	return 0;
}

void copyy(char str1[])
{
	int i;
	char str2[100];
	
	for(i=0; str1[i]!='\0'; i++)
	{
		if(str1[i]>'A' && str1[i]<'Z')
		{
			str1=str1[i]+32;
		}
		else if(str1[i]>'a' && str1[i]<'z')
		{
			str1[i]=str1[i]-32;
		}
	}
	
	for(i=0; str1[i]!='\0'; i++)
	{
		str2[i]=str1[i];
	}
	
	printf("\nString after copied: %s", str2);

}
