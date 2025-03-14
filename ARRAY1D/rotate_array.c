#include<stdio.h>
int main()
{
    
    int arr[]={1,2,3,4,5,6,7,8},t,n,k;   
    printf("enter k:");
    scanf("%d",&k);



    n=sizeof(arr)/4;
    printf("length of array is:%d\n ",n);

    k=k%n;


/* steps
1.k=k%n
2.reverse (0,n-1)
3.reverse(0,k-1)
4.reverse(k,n-1) */
    
    for(int i=0,j=n-1;i<j;i++,j--){
      t=arr[i];
      arr[i]=arr[j];
      arr[j]=t;
    }
    for(int i=0,j=k-1;i<j;i++,j--){
      t=arr[i];
      arr[i]=arr[j];
      arr[j]=t;

    }
    for(int i=k,j=n-1;i<j;i++,j--){
      t=arr[i];
      arr[i]=arr[j];
      arr[j]=t;

    }

  

  
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}