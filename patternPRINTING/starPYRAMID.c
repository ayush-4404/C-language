#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) // outer loop>no. of rows
    {
        for(int j=1;j<=n-i;j++) // inner loop>no. of columns
        printf("  ");
        for(int k=1;k<=2*i-1;k++)
        printf("* ");

        printf("\n");
    } 
    

    return 0;
}