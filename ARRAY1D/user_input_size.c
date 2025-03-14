#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    
   }
   for(int j=0;j<n;j++)
   printf("%d\n",arr[j]);


    return 0;
}