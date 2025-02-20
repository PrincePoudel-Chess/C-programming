#include<stdio.h>
#include <string.h>
#define n 2
int i,j;






struct std{
	char name[50];
	char add[50];
	int id;
}student[n],temp;



int funct(struct std students[n]){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(strcmp(students[i].name,students[j].name)>0){
				temp = students[i];
				students[i]  = students[j];
				students[j] = temp;

				
				 
				
			}
		}
	}
	for(i=0;i<n;i++){
		printf("\n%s",students[i].name);
		printf("\t%s",students[i].add);
		printf("\t%d",students[i].id);
	}

}




int main(){
	
	
	for(i=0;i<n;i++){
		printf("Name:");
		scanf("%s",student[i].name);
		printf("address:");
		scanf("%s",student[i].add);
		printf("ID:");
		scanf("%d",&student[i].id);
		printf("\n\n");
		
	}
	funct(student);
	getch();
	return 0;
}


