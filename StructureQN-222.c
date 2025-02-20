//WAP to define a structure representing BCT's student's name,rollno,marks_c,status{fail,pass}.Pass this structure 
//to function by CBreference.Return the structure form function to main program after assigning values in structure members.Display the values 
//from main program()use enumerated data types to represent status and structure pointer


#include<stdio.h>
enum stat { pass, fail };
struct info{
	
	char name[100];
	int roll;
	int marks_c;
	enum stat status;
};

struct info *func(struct info *pt){
	printf("\nEnter name:");
	scanf("%s",pt->name);
	printf("\nEnter Roll_No:");
	scanf("%d",&pt->roll);
	printf("Enter marks_c:");
	scanf("%d",&pt->marks_c);
	if (pt->marks_c >=40){
		pt->status = pass;
	}
	else pt->status = fail;
	return pt;
		
	
}

int main(){
	
	struct info *value;
	struct info student;
	value = func(&student);
	printf("\n\n%s\t\t%d\t\t%d\t\t%s",value->name,value->roll,value->marks_c,(value->status==pass)?"Pass":"Fail");
	
	return 0;
	
	
	
	
}
