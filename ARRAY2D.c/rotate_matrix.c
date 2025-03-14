#include<stdio.h>
#include<limits.h>
int main(){

int m,n;
    
    printf("enter no. of columns:");
    scanf("%d",&n);
    int b[n][n],c[n][n];
    printf("enter the elements row wise for b:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);

        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
          int temp=b[i][j];
          b[i][j]=b[j][i];
          b[j][i]=temp;
        }    
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp =b[i][j];
            b[i][j]=b[i][n-1-j];
            b[i][n-1-j]=temp;

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}