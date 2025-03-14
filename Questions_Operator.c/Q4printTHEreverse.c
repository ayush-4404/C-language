#include<stdio.h>
int main()
{
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
    printf("The reverse of given number is: %d",REVERSE);
    return 0;
}