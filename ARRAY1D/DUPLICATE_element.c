#include<stdio.h>
int main()
{
    int arr[10]={4,5,19,20,21,21,23,24,21,29};
    int sum1=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                 printf("\nduplicate element in the array is %d",arr[i]);
                 break;
            }
        }
          
    }
   
    return 0;
}