#include<stdio.h>
int main()
{
int a,b;
printf("enter first number ");
scanf("%d",&a);
printf("enter second number ");
scanf("%d",&b);
// int q=a/b;
// int r=a-q*b;
// printf("The remainder when %d is divided by %d is %d", a,b,r);
int r=a%b; // this is modulo operator
printf("The remainder is:%d",r);

 return 0;  
}