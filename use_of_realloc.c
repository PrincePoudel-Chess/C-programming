#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *name;
	
	name=(char*)malloc(11);
	strcpy(name, "Epstein Island");
	
	printf("Name: %s", name);
	
	name=(char*)realloc(name, 23);
	strcpy(name, "Stephen Hawking in Epstein Island");
	
	printf("\nName: %s", name);
	
	return 0;
}
