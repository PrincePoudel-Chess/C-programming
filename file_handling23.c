#include<stdio.h>

int main(){
	
	struct customer{
		char fname[50];
		char lname[50];
		int accNum;
		int balance;}person;

	FILE *fp = fopen("customer.bin","ab");
	if(fp == NULL){
		perror("DNE");
		return 1;
	}
	int i,n;
	printf("\nEnter the number of records to append:");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		printf("fname:");
		fgets(person.fname,50,stdin);
		printf("lname:");
		fgets(person.lname,50,stdin);
		printf("\naccNum:");
		scanf("%d",&person.accNum);
		getchar();
		printf("\nBalance:");
		scanf("%d",&person.balance);
		getchar();
		fprintf(fp,"%s\t%s\t%u\t%d",person.fname,person.lname,person.accNum,person.balance);
	}
	fclose(fp);
	fp = fopen("customer.bin","rb");
	while(fscanf(fp,"%s%s%u%d",person.fname,person.lname,&person.accNum,&person.balance)!=EOF){
		getchar();
		printf("\n%s\t%s\t%u\t%d",person.fname,person.lname,person.accNum,person.balance);
	}
	getch();
	return 0;


}
