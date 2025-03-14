#include<stdio.h>
void swap(int* p,int* q){
    int temp;
    temp =*p;
    *p=*q;
    *q=temp;
    return;

}
int main(){
    int arr[]={5,1,3,7,6,0,11,2,9};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nsorted array is :");
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0&&arr[j]<arr[j-1]){
            swap(&arr[j],&arr[j-1]);
            j--;
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}