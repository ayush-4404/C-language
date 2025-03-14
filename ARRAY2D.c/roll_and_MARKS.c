#include<stdio.h>
int main()
{
    
    int b[4][2];
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&b[i][j]);

        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}