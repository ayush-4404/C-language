#include<stdio.h>
int main(){
   int arr[]={6,1,2,3,2,5,4};
   int s1=6*7/2;
   int sum=0;
   for(int i=0;i<7;i++){
    sum+=arr[i]; 
   }
   printf("duplicaate element is %d",sum-s1);
   return 0;
}