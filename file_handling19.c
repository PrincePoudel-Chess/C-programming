#include<stdio.h>

int main(){
	struct customer{
		char fname[50];
		char lname[50];
		long int accNum;
		int balance;
	}person;
	FILE *fp = fopen("customer.dat","r");
	while(fscanf(fp,"%s%s%u%d",person.fname,person.lname,&person.accNum,&person.balance)!=EOF){
		printf("\n%s\t%s\t%u\t%d",person.fname,person.lname,person.accNum,person.balance);
	}
	fclose(fp);
	getch();
	return 0;	
	
}
