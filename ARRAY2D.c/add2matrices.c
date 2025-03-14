#include<stdio.h>
int main()
{
    int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of columns:");
    scanf("%d",&n);
    int b[m][n],c[m][n],d[m][n];
    printf("enter the elements row wise for b:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);

        }
    }
    printf("enter the elements row wise for c:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&c[i][j]);

        }
    }
    printf("enter the elements row wise for d:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&d[i][j]);

        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]+c[i][j]+d[i][j]);
        }
        printf("\n");
    }

    return 0;
}