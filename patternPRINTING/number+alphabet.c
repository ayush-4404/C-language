#include<stdio.h>
int main()
{
    int n;
    printf("ENTER n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        if(i%2!=0){
        for(int j=1;j<=i;j=j+1){
        printf("%d ",j);
        }
        }
        else{
            for(int k=65;k<=64+i;k++)
            printf("%c ",k);
        }

        printf("\n");


    }


    return 0;
}