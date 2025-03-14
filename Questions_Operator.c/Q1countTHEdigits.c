#include<stdio.h>
int main()
{
    //write a program to count the digits of a given number
    int n;
    printf("ENTER any Number: ");
    scanf("%d",&n);
    int count=0;
    while(n!=0){ //error on more than 10
        n=n/10;
        count++;
    }
    printf("The Number Of Digits are %d",count);



    return 0;
}