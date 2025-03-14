#include<stdio.h>
int main()
{
    //write a program to print the sum of all the even digits of a given number
    int n;
    printf("ENTER any Number: ");
    scanf("%d",&n);
    int sum =0;
    int x;
    while(n!=0){ //error on more than 10
       
        x=n%10;
        if(x%2==0){
        sum=sum+x;
        }
        n=n/10; 
    }
    printf("The Sum Of digits of given number is: %d",sum);
    
    return 0;
}