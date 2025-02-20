#include<stdio.h>

int main(){
	int num,i;
	FILE *file = fopen("data.dat","w");
	for(i=0;i<10;i++){
		fprintf(file,"%d",i);
	}
	fclose(file);
	file = fopen("data.dat","r");
	if (file ==NULL){
		perror("Error");
		return 1;
	}
	
	while(fscanf(file,"%d",&num)!=EOF){
		printf("%d",num);
	}
	fclose(file);
	
	
}
