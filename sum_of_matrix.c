//326.	C Program to Read a Matrix and find Sum and Product of all elements
#include <stdio.h>
int main()
{
    int arr[100][100], r, c, i, j, sum = 0, product = 1;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
            product *= arr[i][j];
        }
    }
    printf("The sum of all elements of the matrix is: %d\n", sum);
    printf("The product of all elements of the matrix is: %d\n", product);
    return 0;
}
