#include <stdio.h>

int main() {
    int b = 15;
    int *c = &b;

    printf("%p\n", c);  // Correct: using %p to print a pointer

    return 0;
}
