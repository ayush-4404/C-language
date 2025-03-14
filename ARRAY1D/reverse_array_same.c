#include<stdio.h>
int main()
{
    
    int arr[]={1,2,3,4,5,6,7,8},t,n;

    n=sizeof(arr)/4;
    printf("length of array is:%d\n ",n);
    
    for(int i=0;i<(n+1)/2;i++){
      t=arr[i];
      arr[i]=arr[n-1-i];
      arr[n-1-i]=t;

    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}