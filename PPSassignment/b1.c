#include <stdio.h>

// Function to calculate the value of x^3
double func(double x) {
    return x * x * x;
}

// Function to perform numerical integration using the trapezoidal rule
double integrate(double a, double b, int divisions) {
    double h = (b - a) / divisions; // Width of each subinterval
    double sum = (func(a) + func(b)) / 2.0; // Initialize sum with the average of the first and last terms
    
    for (int i = 1; i < divisions; i++) {
        double x = a + i * h;
        sum += func(x); // Add the value of the function at x_i
    }
    
    return sum * h; // Multiply by h to get the integral approximation
}

int main() {
    int divisions;
    printf("Enter the number of divisions: ");
    scanf("%d", &divisions);

    double a = 1.0; // Lower limit of integration
    double b = 3.0; // Upper limit of integration

    double result = integrate(a, b, divisions);
    printf("The integral of x^3 from %.2f to %.2f with %d divisions is approximately: %.6f\n", a, b, divisions, result);

    return 0;
}
