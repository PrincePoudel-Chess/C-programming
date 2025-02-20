#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("Alphabets.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read characters until EOF is reached
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Print the character
    }

    // Check if the end of the file was reached
    if (feof(file) !=0) {
        printf("\nEnd of file  reached.\n");
    }

    fclose(file);
    return 0;
}
