#include<stdio.h>
int main()
{
    if(3+2%5)
    printf("THIS WORKS");
    if(-5)
    printf("\nEVEN THIS WORKS");
    if("a")
    printf("\nSURPRISINGLY,EVEN THIS WORKS");
    if(5+6-11) //if(0) means false
    printf("it doesn't work");
    return 0;
}