//Write name age and height of a person into a datafile "person.txt" and read it (Use fprintf() and fscanf())
#include<stdio.h>
#include<conio.h>

int main(){
	char ch;
	
	FILE *fp = fopen("person.txt","w");
	if(fp == NULL){
		perror("Error");
		return 1;
	}
	char name[50] = "Prince_Poidel";
	int age = 20;
	int height = 170;
	fprintf(fp,"Name:%s age:%d height:%d",name,age,height);
	fclose(fp);
	fp = fopen("person.txt","r");
	if(fp == NULL){
		perror("Error");
		return 1;
	}
	printf("\n");
	while(fscanf(fp,"%c",&ch)!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
	getch();
	return 0;
	
	
}
