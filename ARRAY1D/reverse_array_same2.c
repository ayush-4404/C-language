#include<stdio.h>
int main()
{
    
    int arr[]={1,2,3,4,5,6,7,8},t,n;

    n=sizeof(arr)/4;
    printf("length of array is:%d\n ",n);

  int i=0;
   int j=n-1;
   while(i<j){
    t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
    i++;
    j--;
   }
    
  

//   for(int i=0, j=n-1;i<j;i++,j--){
//         t=arr[i];
//         arr[i]=arr[j];
//         arr[j]=t;   
//   }

    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}