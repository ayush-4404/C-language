#include<stdio.h>
int main()
{
    int l,b;
    printf("enter length and breadth:");
    scanf("%d %d",&l,&b);
    for(int i=1;i<=b;i++) // outer loop>no. of rows
    {
        for(int j=1;j<=l;j++) // inner loop>no. of columns
        printf("*");

        printf("\n");
    } 
    

    return 0;
}