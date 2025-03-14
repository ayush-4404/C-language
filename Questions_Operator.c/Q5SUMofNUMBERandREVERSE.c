#include<stdio.h>
int main()
{
    //write a program to print the sum of given number and it's reverse 
    int n;
    printf("ENTER any Number: ");
    scanf("%d",&n);
    int REVERSE =0;
    int digit;
    while(n!=0){ 
        digit=n%10;
        REVERSE=10*REVERSE+digit;
        n=n/10; 
        
    }
    printf("%d",REVERSE);
    return 0;
}