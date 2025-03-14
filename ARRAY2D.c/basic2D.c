#include<stdio.h>
int main()
{
    //while initialisation of 2d array it is necessary the second dimension,whereas the first dimension is optional.
    int brr[3][3]={{1,2,7},{3,4,0},{5,6,9}};
    // brr[0][0]=1;
    // brr[0][1]=2;
    // brr[1][0]=3;
    // brr[1][1]=4;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        printf("%d ",brr[i][j]);
        printf("\n");
    }

    return 0;
}