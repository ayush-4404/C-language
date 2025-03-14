#include <stdio.h>

// Define the function g(y)
double g(double y) {
    return 3 * y * y - 7 * y;
}

// Numerical differentiation function
double differentiate(double y, double delta) {
    return (g(y + delta) - g(y)) / delta;
}

int main() {
    double y0 = 2.0; // Point at which differentiation is to be performed
    double delta = 0.0001; // Step size for numerical differentiation

    // Calculate the derivative at y = y0 using numerical differentiation
    double derivative = differentiate(y0, delta);

    printf("The derivative of g(y) at y = %.2f is approximately: %.1f\n", y0, derivative);

 return 0;
}

