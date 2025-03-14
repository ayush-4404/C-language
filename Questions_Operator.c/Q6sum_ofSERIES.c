#include<stdio.h>
int main()
{
    //print the sum of this series: 1-2+3-4+5-6+....
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
       
    if(i%2==0)
     sum =sum -i;
     else 
     sum=sum+i;
        
    }
    printf("sum=%d",sum);

    return 0;
}