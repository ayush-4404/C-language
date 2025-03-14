#include<stdio.h>
int main()
{
    int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of columns:");
    scanf("%d",&n);
    int b[m][n];
    printf("enter the elements row wise:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);

        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}