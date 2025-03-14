#include<stdio.h>
int main(){
    int a,b,t;
    printf("Pls. Enter the value of a and b respectively\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping value of a and b are %d and %d\n",a,b);
    printf("After swapping values are:\n");
    t=a;
    a=b;
    b=t;
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}