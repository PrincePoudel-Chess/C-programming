// C program to demonstrate example of floor and ceil functions

# include<stdio.h>

int main(){
    double num1 = 4.2293;
    double num2 = 5.39049;
    printf("The Floor(%f) = %f",num1,floor(num1));
    printf("\nThe Floor(%f) = %f",num2,floor(num2));
    printf("\nThe Ceiling(%f) = %f",num1,ceil(num1));
    printf("\nThe Ceiling(%f) = %f",num2,ceil(num2));


    getch();
    return 0;
}
