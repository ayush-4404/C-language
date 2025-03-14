#include<stdio.h>
int main(){
    // int m,n,p;
    // printf("enter no. of rows of b:");
    // scanf("%d",&m);
    // printf("enter no. of columns of b:");
    // scanf("%d",&n);
    // // printf("enter no. of rows of c:");
    // // scanf("%d",&n);
    // printf("enter no. of columns of c:");
    // scanf("%d",&p);

    // int b[m][n],c[n][p],d[m][p];
    // printf("enter the elements row wise for b:");
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         scanf("%d",&b[i][j]);

    //     }
    // }
    // printf("enter the elements row wise for c:");
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<p;j++){
    //         scanf("%d",&c[i][j]);

    //     }
    // }
    int b[3][2]={{1,2},{3,4},{5,6}};
    int c[2][4]={{1,2,3,4},{5,6,7,8}};
    int d[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
             d[i][j]=0;
            for(int k=0;k<2;k++){
                d[i][j]+=b[i][k]*c[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }

    return 0;
}