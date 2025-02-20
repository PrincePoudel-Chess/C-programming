#include<stdio.h>
#include<stdlib.h>


// Source code as a Output
int main(){
	char ch;
	FILE *file = fopen(__FILE__,"r");
	while((ch = fgetc(file))!=EOF){
		putchar(ch);
	}
	fclose(file);
	
	getch();
	return 0;
	
	
	
}
