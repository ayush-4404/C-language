#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=0;
    printf("1\n1\n");
   

    for(int i=1;i<=n-2;i++){
        sum =a+b;
        a=b;
        b=sum;

printf("%d \n",sum);
    
    }
    

    return 0;
}