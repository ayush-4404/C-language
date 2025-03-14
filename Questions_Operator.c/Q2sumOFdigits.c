#include<stdio.h>
int main()
{
    //write a program to take the sum of digits of a given number
    int n;
    printf("ENTER any Number: ");
    scanf("%d",&n);
    int sum =0;
    int x;
    while(n!=0){ 
        //x=n%10;
        sum=sum+n%10;
        n=n/10;
        
        
    }
    printf("The Sum Of digits of given number is: %d",sum);
    


    return 0;
}