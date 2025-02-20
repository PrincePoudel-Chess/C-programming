#include<stdio.h>

struct customer{
	char fname[50];
	char lname[50];
	long int accNum;
	int balance;
}person;

int main(){
	
	int i;
	FILE *fp = fopen("customer.dat","w");
	if(fp == NULL){
		perror("Error");
		return 1;
	}
		while(1){
		
		
		printf("fname:");
		fgets(person.fname,50,stdin);
		if(strcmp(person.fname,"stop\n")==0){
			break;
		}
		printf("\nlname:");
		fgets(person.lname,50,stdin);
		printf("accNumber:");
		scanf("%d",&person.accNum);
		getchar();
		printf("Balance:");
		scanf("%d",&person.balance);
		getchar();
		
		fprintf(fp,"%s\t%s\t%u\t%d\n",person.fname,person.lname,person.accNum,person.balance);
	}
	fclose(fp);
	getch();
	return 0;
}
