#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int brr[3][2];
    for(int j=0;j<3;j++){
        for(int i=0;i<2;i++){
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",brr[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}