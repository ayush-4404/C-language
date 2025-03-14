#include<stdio.h>
int main()
{
    int a,b,f=1;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter exponent:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
         f=f*a;
        
    }
     printf("%d\n",f);

    return 0;
}