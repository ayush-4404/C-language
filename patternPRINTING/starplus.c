#include<stdio.h>
int main()
{
    int n;
    printf("ENTER n:");
     scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=n;j++){
            int t=(n+1)/2;
            if(i==t||j==t)
            printf("* ");
            else printf("  ");

        }
        // if(i==(n+1)/2){
        // for(int j=1;j<=n;j++) 
        // printf("* ");
        // }
        // else{
        //     for(int k=1;k<=n;k++)
        //     if(k==(n+1)/2)
        //     printf("* ");
        //     else
        //     printf("  ");
        // }

        printf("\n");


    }


    return 0;
}