#include<stdio.h>

struct student{
	int roll;
	char name[100];
	char address[100];
	int age;
	float marks[0];
};

int main()
{
	int n;
	printf("How many students do you have? ");
	scanf("%d", &n);
	printf("\n");
	
	struct student st[n];
	int i;
	
	FILE *fptr;
	fptr=fopen("std.txt", "r");
	
	if(fptr==NULL)
	{
		printf("file cannot be opened.\n");
	}
	
	for(i=0; i<n; i++)
	{
		printf("student %d: \n", i+1);
		printf("Roll Number: ");
		scanf("%d", &st[i].roll);
		
		printf("Name: ");
		scanf("%s", st[i].name);
		
		printf("Address: ");
		scanf("%s", st[i].address);
		
		printf("Age: ");
		scanf("%d", &st[i].age);
		
		printf("Marks in Physics: ");
		scanf("%f", &st[i].marks[0]);
		
		printf("Marks in C: ");
		scanf("%f", &st[i].marks[1]);
		
		printf("Marks in Math: ");
		scanf("%f", &st[i].marks[2]);
		
		printf("\n");
	}
	
//	fwrite(&st, sizeof(struct student), n, fptr);	
	float sum, average[n];
	for(i=0; i<n; i++)
	{
		sum=0;
		sum=st[i].marks[0]+st[i].marks[1]+st[i].marks[2];
		average[i]=sum/3;
	}
	
	for(i=0; i<n; i++)
	{
		fprintf(fptr,"Roll Number: %d", st[i].roll);
		fprintf(fptr, "Name: %s", st[i].name);
		fprintf(fptr, "Address: %d", st[i].address);
		fprintf(fptr, "Age: %d", st[i].age);
		fprintf(fptr, "Average marks: %f", average[i]);
	}
	
	fclose(fptr);
	
	return 0;
}
