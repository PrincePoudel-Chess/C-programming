#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

// Function to read a complex number from the user
Complex read_complex() {
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to add two complex numbers
Complex add_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiply_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

// Function to divide two complex numbers
Complex divide_complex(Complex a, Complex b) {
    Complex result;
    float denominator = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}

// Function to print a complex number
void print_complex(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    Complex c1, c2, result;
    
    printf("Enter the first complex number:\n");
    c1 = read_complex();
    
    printf("Enter the second complex number:\n");
    c2 = read_complex();
    
    result = add_complex(c1, c2);
    printf("Sum: ");
    print_complex(result);
    
    result = subtract_complex(c1, c2);
    printf("Difference: ");
    print_complex(result);
    
    result = multiply_complex(c1, c2);
    printf("Product: ");
    print_complex(result);
    
    result = divide_complex(c1, c2);
    printf("Quotient: ");
    print_complex(result);
    
    return 0;
}

