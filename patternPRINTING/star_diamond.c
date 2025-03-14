#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=1;j<=(n+1)/2-i;j++)
        printf("  ");
        for(int k=1;k<=2*i-1;k++)
        printf("* ");
        
        printf("\n");
    }
    for(int p=1;p<=(n-1)/2;p++){
        for(int q=1;q<=p;q++)
        printf("  ");
        int x=(n-1)/2-p;
        for(int r=1;r<=2*x+1;r++)
        printf("* ");

        printf("\n");
    }
    
    return 0;
}