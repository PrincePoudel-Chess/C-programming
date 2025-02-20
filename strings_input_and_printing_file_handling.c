//Write set of strings of each of length 40 into a file "String.txt and display it( using fputs() and fgets())

#include<stdio.h>

int main(){
	int i;
	char s[40];
	FILE *fp = fopen("strings.txt","w");
	for(i=0;i<2;i++){
		printf("Enter the string:");
		scanf("%s",s);
		fputs(s,fp);
		fputs("\n",fp);
			
	}
	fclose(fp);
	fp = fopen("strings.txt","r");
	printf("\n\n");
	for(i=0;i<2;i++){
		fgets(s,11,fp);
		printf("%s",s);
	}
	
	
}
