#include <stdio.h>

int main() {
    char line[100];
    char text[100] = "Na";

    FILE *file = fopen("Newfile.txt", "w+");  
    
    fprintf(file,"%s",text);
	fgets(line, 100, file);  // Reads the first line and moves the file pointer
	printf("%s",line);
    fclose(file);
}
