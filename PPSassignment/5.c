#include<stdio.h>
#include<math.h>
#include<float.h>

float calculateIntegral(float coefficient, float exponent, float xValue){
    return ((coefficient/(exponent+1))*pow(xValue,exponent+1));
}

int main(){
    float xValue;
    printf("Enter the value of x: ");
    scanf("%f",&xValue);

    printf("Enter the equation in the form of coefficient exponent + or - : ");
    float coefficient, exponent;
    char operator;
    float integralResult = 0;

    do{
        scanf("%f %f %c",&coefficient,&exponent,&operator);
        if(operator == '+')
            integralResult += calculateIntegral(coefficient,exponent,xValue);
        else
            integralResult -= calculateIntegral(coefficient,exponent,xValue);
    } while(exponent > 0);

    printf("The integral at x = %f is %f", xValue, integralResult);

    return 0;
}
