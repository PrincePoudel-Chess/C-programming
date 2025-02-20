#include <stdio.h>

void recur(int n, int *num, int count) {
    if (n == 0) {
        return; // Base case: Stop when no more elements are left
    }
    printf("\n%d", *(num + count)); // Print the current element
    recur(n - 1, num, count + 1);   // Recursive call for the next element
}

int main() {
    int n, i; // Declare variables

    printf("Enter the total number of terms: ");
    scanf("%d", &n);

    int num[n]; // Valid since `n` is now initialized
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]); // Input elements
    }

    printf("\nArray elements are:");
    recur(n, num, 0); // Start recursion

    return 0; // No need for `getch();`
}

