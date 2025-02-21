#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int n;
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	n=strcmp(str1,str2);
  	if(n==0)
  	{
  		printf("Both strings are identical.");
	  }
	  else if(n<0)
	  {
	  	printf("Second string is greater.");
	  }
	  else if(n>0)
	  {
	  	printf("First string is greater.");
	  }
	return 0;
	
}
