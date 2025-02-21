#include<stdio.h>

int main()
{
	FILE *fptr;
	char name[100];
	int age;
	float height;
	
	fptr=fopen("person.txt", "w");
	
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	
	printf("\nEnter your age: ");
	scanf("%d", &age);
	
	printf("\nEnter your height: ");
	scanf("%f", &height);
	
	fprintf(fptr,"Name: %s", name);
	fprintf(fptr,"\nAge: %d", age);
	fprintf(fptr, "\nHeight: %f", height);
	
	fclose(fptr);
	
	
	
	fptr=fopen("person.txt", "r");
	fscanf(fptr, "%s%d%f", name, &age, &height);
	printf("\nName: %s", name);
	printf("\nAge: %d", age);
	printf("\nHeight: %f", height);
	fclose(fptr);
	
	return 0;
	
	
}
