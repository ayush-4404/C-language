#include<stdio.h>
int main()
{
    //write a program to print the factorial of first 'n'
    int n;
    int f=1;
    printf("ENTER any Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
    f=f*i;
    if(n==0){
    printf("The factorial of %d is %d",n,1);
    }
    else{
    printf(" The factorial of %d is %d\n",i,f);
    }

    
    }
    return 0;
}
    