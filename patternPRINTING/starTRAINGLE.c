#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
   //int a=n;
    for(int i=1;i<=n;i++){
    //     for(int j=1;j<=a;j++)
    //     printf("* ");
    //    a--;
        for(int j=n;j>=i;j--)
        printf("* ");
         printf("\n");
    }
     

    return 0;
}