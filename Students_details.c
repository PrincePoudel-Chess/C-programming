#include<stdio.h>

struct student
{
	int roll_no;
	char name[100];
	char address[100];
	int age;
	float marks[3];
};


int main()
{
	int n;
	printf("How many students you have?\n");
	scanf("%d", &n);
	printf("\n");
	
	struct student st[n];
	int i, sum[n], average[n];
	
	for(i=0; i<n; i++)
	{
		printf("student %d: \n", i+1);
		printf("Roll Number: ");
		scanf("%d", &st[i].roll_no);
		fflush(stdin);
		printf("Name: ");
		fgets(st[i].name, sizeof(st[i].name), stdin);
		
		printf("Address: ");
		fgets(st[i].address, sizeof(st[i].address), stdin);
		
		printf("Age: ");
		scanf("%d", &st[i].age);
		
		printf("Enter marks in physics: ");
		scanf("%f", &st[i].marks[0]);
		
		printf("Enter marks in C: ");
		scanf("%f", &st[i].marks[1]);
		
		printf("Enter marks in Math: ");
		scanf("%f", &st[i].marks[2]);
		
		printf("\n");
	}
	

	
	for(i=0; i<n; i++)
	{
		sum[i]=st[i].marks[0]+st[i].marks[1]+st[i].marks[2];
		average[i]=sum[i]/3;
	}
	
	
	printf("_____________________________________________________________\n");
	for(i=0; i<n; i++)
	{
		printf("student %d:\n", i+1);
		printf("Roll Number: %d", st[i].roll_no);
		printf("Name: %s", st[i].name);
		printf("Address: ", st[i].address);
		printf("Age: %d", st[i].age);
		printf("Physics: %.2f", st[i].marks[0]);
		printf("C: %.2f", st[i].marks[1]);
		printf("Math: %.2f", st[i].marks[2]);
		printf("Average: %.2f", average[i]);
		printf("\n");
	}
	
	return 0;
}
