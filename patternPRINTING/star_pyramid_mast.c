#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x=i-1;
        if(i==1){    
            for(int j=1;j<=2*n-1;j++)
            printf("* ");
            
        }
        
        else{
            printf("\n");
            for(int p=1;p<=n-x;p++)
            printf("* ");
            for(int q=1;q<=2*x-1;q++)
            printf("  ");
            for(int r=1;r<=n-x;r++)
            printf("* ");
            
        }

    }

    return 0;
}