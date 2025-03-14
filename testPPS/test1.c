#include<stdio.h>
int main(){
    int arr[12];
    int brr[3][4];
    int i,j,a=0;
    printf("Pls. Enter the elements in array\n");
    for(i=0;i<12;i++){
        scanf("%d", &arr[i]);
    }
    printf("Array Elements are\n");
    for(i=0;i<12;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            brr[i][j]=arr[a];
            a++;
        }
    }
    printf("\nThe stored number in 2d matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if( brr[i][j]>50){
            brr[i][j]=50;
        }

    }
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf(brr[i][j]);
    }

}
    return 0;
}