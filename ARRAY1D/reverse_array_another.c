#include<stdio.h>
int main()
{
     printf("input numbers:");
    int arr[5],brr[5];
   
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
      brr[4-i]=arr[i];
    }
    for(int i=0;i<5;i++){
        printf("%d ",brr[i]);
    }
    int count =0;
    for(int i=0;i<5;i++){
        if(arr[i]!=brr[i])
        count ++;
    }
    if(count==0)
    printf("\ngiven array is palindrome");
    else
    printf("\ngiven array is not a palindrome");
   

    return 0;
}