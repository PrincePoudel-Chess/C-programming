#include<stdio.h>

void process(char [],char []);

int main()
{
 	char a[50],b[50];
	printf("Enter string:");
 	gets(a);
 	process(a,b);
 	
 	printf("The changed string is: %s",b);
	
	return 0;
}

void process(char a[],char b[])
{ 
 	int i;
 	for(i=0;a[i]!='\0';i++)
 	{
 
 		if(a[i]>='A' && a[i]<='Z')
 			b[i]=a[i]+32; 
 			
 		else if(a[i]>='a' && a[i]<='z')
 			b[i]=a[i]-32; 
 		else
 			b[i]=a[i]; 
 	}
 	b[i]='\0'; 
}
