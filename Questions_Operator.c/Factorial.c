#include<stdio.h>
int main()
{
    //write a program to print the factorial of a given number
    int n;
    int f=1;
    printf("ENTER any Number: ");
    scanf("%d",&n);
    // for(int i=1;i<=n;i=i+1){
    // f=f*i;


    // }
    // if(n==0){
    // printf("The factorial of %d is %d",n,1);
    // }
    // else{
    // printf(" The factorial of %d is %d\n",n,f);
    // }

    for(int i=n-1;i>=1;i--){
        n=n*i;
        

    }
    if(n==0)
     printf("The factorial of %d is %d",n,1);
     else
    printf("The factorial of entered number is %d",n);
   


    return 0;
}