#include<stdio.h>
int main()
{
    //print the sum of this series: 1-2+3-4+5-6+....
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
   int sum;
       
    if(n%2==0)
      sum =-n/2;
     else 
      sum=-n/2+n;
    
    printf("sum=%d",sum);

    return 0;
}