#include<stdio.h>
#include<limits.h>
void swap(int* p,int* q){
    int temp;
    temp =*p;
    *p=*q;
    *q=temp;
    return;

}
int main(){
    int arr[]={5,1,3,7,6,11,2,9};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nsorted array is :");
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mI=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mI=j;
            }
        }
        swap(&arr[i],&arr[mI]);  
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}