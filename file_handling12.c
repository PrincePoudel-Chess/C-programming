#include<stdio.h>


int main(){
	
	
	int i,qty,rate;
	char product[50];
	FILE *file = fopen("inventory.txt","w");
	if(file == NULL){
		perror("Error");
		return 1;
	}
	fprintf(file,"Product Name\t\tQuantity\t\tRate\n");
	for(i=0;i<3;i++){
		printf("Enter the product,qty and rate:");
		scanf("%s %d %d",product,&qty,&rate);
		fprintf(file,"%s\t\t\t\t%d\t\t\t\t%d\n",product,qty,rate);
	
		
	}
	
	fclose(file);
	
}
