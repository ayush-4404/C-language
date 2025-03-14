#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("enter no. of rows of b:");
    scanf("%d",&m);
    printf("enter no. of columns of b:");
    scanf("%d",&n);
    printf("enter no. of rows of c:");
    scanf("%d",&q);
    printf("enter no. of columns of c:");
    scanf("%d",&p);

    int b[m][n],c[q][p],d[m][p];
    printf("enter the elements row wise for b:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);

        }
    }
    printf("enter the elements row wise for c:");
    for(int i=0;i<q;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&c[i][j]);

        }
    }
    if(n!=q){
        printf("matrices cant be multipied");
    }
    else{

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            d[i][j]=0;
            for(int k=0;k<n;k++){
                d[i][j]+=b[i][k]*c[k][j];
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    }

    return 0;
}