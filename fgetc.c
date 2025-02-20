#include<stdio.h>

int main(){
	FILE *file;
	char ch;
	file = fopen("Alphabets.txt","r");
	
	 if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Contents of the file:\n");
    
    while(ch!=EOF){
    	printf("%c\n",ch);
    	ch = fgetc(file);
	}
	printf("%c",ch);
	
	
}
