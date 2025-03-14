#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001

double squareRootOfTwo() {
    double x = 1.0; // Initial guess

    // Loop until the desired precision is achieved
    while (fabs(x * x - 2) >= EPSILON) {
        // Newton-Raphson method iteration
        x = x - (x * x - 2) / (2 * x);
    }

    return x;
}

int main() {
    double result = squareRootOfTwo();
    printf("The square root of 2 is approximately: %.10f\n", result);
    return 0;
}
