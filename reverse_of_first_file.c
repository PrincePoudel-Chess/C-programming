#include<stdio.h>

int main(){int i;
	char buffer[150];
	char r;
	FILE *file = fopen("first.txt","w");
	printf("Enter the text here:");
	gets(buffer);
	fputs(buffer,file);
	fclose(file);
	file = fopen("second.txt","w");
	int l = strlen(buffer);
	for(i=l-1;i>=0;i--){
		r = buffer[i];
		fputc(buffer[i],file);
	}
	fclose(file);
	getch();
	return 0;
}
