#include<stdio.h>
int main()
{
    int l,b;
    printf("ENTER length and breadth:");
    scanf("%d%d",&l,&b);
    for(int i=1;i<=b;i=i+1){
        for(int j=1;j<=l;j++) 
        if(i==1||i==b||j==1||j==l)
        printf("* ");
        else printf("  ");

        printf("\n");


    }


    return 0;
}