#include<stdio.h>
#include<limits.h>
int main(){

int m,n;
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no. of columns:");
    scanf("%d",&n);
    int b[m][n],c[m][n];
    printf("enter the elements row wise for b:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);

        }
    }
    int great= INT_MIN;
    int index;
  for(int i=0;i<m;i++){
    int sum =0;
    for(int j=0;j<n;j++){
        sum+=b[i][j];
    }
    if(sum>great){
        great=sum;
        index=i;
    }
    }
    printf("required row is %d and sum is %d",index+1,great);

    return 0;
}