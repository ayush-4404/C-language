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
        for(int k=1;k<=i;k++)
        printf("%c ",64+k);
        for(int l=i-1;l>=1;l--)
        printf("%c ",64+l);

        printf("\n");
    } 
    

    return 0;
}