#include<stdio.h>
#define sum 8
int main()
{
    int count=0,j;
    int arr[]={6,2,0,5,3,2,2,9,7,1,1,4,4};
    for(int i=0;i<=12;i++){
        for( j=i+1;j<=12;j++){
            if(arr[i]+arr[j]==sum)
            count++;
        
         }  
    }
    printf("%d ",count);
    return 0;
}