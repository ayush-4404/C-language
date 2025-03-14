#include <stdio.h>

float f(float x) {
    return x * x * x;
}

int main() {
    int divisions;
    float a = 1.0, b = 3.0, h, sum = 0.0;
    
    printf("Enter the number of divisions: ");
    scanf("%d", &divisions);
    
    h = (b - a) / divisions;
    
    for (int i = 1; i <= divisions; i++) {
        sum += f(a + i * h);
    }
    
    sum *= h;
    
    printf("Result of integration: %.2f\n", sum);
    
    return 0;
}
