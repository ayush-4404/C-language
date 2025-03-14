#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i>n)
             i=2*n-i;
            if(j>n)
             j=2*n-j;
            if(i<j)
            printf("%d ",i);
            if(i>=j)
             printf("%d ",j);
            
        }
        printf("\n");
    }
    return 0;
}