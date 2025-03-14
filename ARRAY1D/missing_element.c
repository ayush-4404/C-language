#include<stdio.h>
int main()
{
    int arr[30]={1,2,3,4,5,6,7,8,9,10,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int sum1=0;
    for(int i=0;i<30;i++){
        sum1+=arr[i];   
    }
    int sum=0;
    for(int i=1;i<=30;i++){
        sum+=i;
    }
    int MI=sum-sum1;
    printf("missing element in the array is %d",MI);
    return 0;
}