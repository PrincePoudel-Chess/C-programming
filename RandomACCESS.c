#include<stdio.h>


int main(){int i;
	char str[10];
	FILE *fp = fopen("customer.txt","r");
	fseek(fp,2,0);
	fscanf(fp,"%s",str);
	printf("%s",str);
	
	fclose(fp);
	
	
}
