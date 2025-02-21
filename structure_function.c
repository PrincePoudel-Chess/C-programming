#include<stdio.h>

struct employee{
	char name[50];
	int id;
	float salary;
};


void display(char empName[], int id, float sal)
{
	printf("\nName\t\tID\t\tSalary");
	printf("\n-----------------------------------------------------");
	printf("\n%st\t%d\t\t%.2f", empName, id, sal);
	
}

int main()
{
	struct employee emp;
	printf("Employee Name: ");
	scanf("%[^\n]s", emp.name);
	
	printf("\nEmployee id: ");
	scanf("%d", &emp.id);
	
	printf("\nEmployee Salary: ");
	scanf("%f", &emp.salary);
	
	printf("\nThe entered employee information is:\n");
	display(emp.name, emp.id, emp.salary);
	
	return 0;
}
