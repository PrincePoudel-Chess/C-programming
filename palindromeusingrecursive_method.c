#include <stdio.h>
#include <string.h>

int isPalindrome(char *s, int start, int end) {
    if (start >= end) {
        return 1; // Base case: Single character or empty string is a palindrome
    }
    if (s[start] != s[end]) {
        return 0; // If mismatch, not a palindrome
    }
    return isPalindrome(s, start + 1, end - 1); // Recursive call
}

int main() {
    char string[50];

    printf("Enter a string: ");
    scanf("%s", string); // Accepting input

    int length = strlen(string);
    
    if (isPalindrome(string, 0, length - 1)) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
