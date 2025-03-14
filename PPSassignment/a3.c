#include<stdio.h>
#include<math.h>
#include<float.h>

int calculate_derivative(int coeff, int power, int x0){
    return (coeff * power * pow(x0, power - 1));
}

int main(){
    int x0;
    printf("Enter x0: ");
    scanf("%d", &x0);

    printf("Enter the terms of the polynomial equation in the format: coefficient exponent +- ");
    int coefficient, exponent;
    char sign;
    int result = 0;

    do {
        scanf("%d %d %c", &coefficient, &exponent, &sign);
        if(sign == '+')
            result += calculate_derivative(coefficient, exponent, x0);
        else
            result -= calculate_derivative(coefficient, exponent, x0);
    } while (exponent > 0);

    printf("The derivative at x = %d is %d", x0, result);
    return 0;
}
