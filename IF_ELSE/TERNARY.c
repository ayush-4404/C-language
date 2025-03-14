#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    //ternary operator
    //exp1 ? exp2: exp3
    //condn  true  false
    n%2==0 ? printf("Even Number"): printf("Odd number");
    return 0;

}