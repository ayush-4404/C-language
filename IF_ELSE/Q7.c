#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st side of triangle:");
    scanf("%d",&a);
    printf("Enter 2nd side of triangle:");
    scanf("%d",&b);
    printf("Enter 3rd side of triangle:");
    scanf("%d",&c);

    if(a+b>c && b+c>a && a+c>b){printf("They can be the side of traingle");}
    else{printf("they can not be sides of a traingle");}
    

    return 0;
}