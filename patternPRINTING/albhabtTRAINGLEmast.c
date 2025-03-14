#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) // outer loop>no. of rows
    {
        for(int j=1;j<=n+1-i;j++) // inner loop>no. of columns
        printf("  ");
        for(int k=1;k<=i;k++)
        printf("%c ",64+k);

        printf("\n");
    } 
    

    return 0;
}