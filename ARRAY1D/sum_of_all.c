#include<stdio.h>
int main()
{
    int arr[6]={23,54,77,55,84,34};
    int sum =0;
    for(int i=0;i<=5;i++)
    sum = sum+arr[i];
    printf("%d",sum);

    return 0;
}