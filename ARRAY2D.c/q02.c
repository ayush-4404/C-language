#include<stdio.h>
int main()
{
    int b[5][5];
    //printf("enter the elements row wise:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            b[i][j]=10;

        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}