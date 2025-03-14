#include<stdio.h>
#include<math.h>

int main(){
    int coeff1, coeff2, coeff3;
    double root1, root2;
    printf("Enter the coefficients of x^2, x, and constant term: ");
    scanf("%d %d %d", &coeff1, &coeff2, &coeff3);
    float discriminant = coeff2 * coeff2 - 4 * coeff1 * coeff3;
    if(discriminant > 0)
        printf("Roots: %f, %f", (-coeff2 + sqrt(discriminant)) / (2 * coeff1), (-coeff2 - sqrt(discriminant)) / (2 * coeff1));
    if (discriminant == 0)
        printf("Roots: %f", -coeff2 / (2 * coeff1));
    if(discriminant < 0)
        printf("Roots: %f +-%f i", -coeff2 / (2 * coeff1), sqrt(-discriminant) / (2 * coeff1));
    return 0;
}
