#include<stdio.h>
void swap(int* p,int* q){
    int temp;
    temp =*p;
    *p=*q;
    *q=temp;
    return;

}
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<=j;i++,j--){
        swap(&arr[i],&arr[j]);
    }
}
int main()
{
    
    int arr[]={1,2,3,4,5,6,7,8},t,n,k;   
    printf("enter k:");
    scanf("%d",&k);
    n=sizeof(arr)/4;
    //printf("length of array is:%d\n ",n);

    k=k%n;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

/* steps
1.k=k%n
2.reverse (0,n-1)
3.reverse(0,k-1)
4.reverse(k,n-1) */

    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}