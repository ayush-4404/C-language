#include<stdio.h>
int main(){
   int arr[]={6,1,2,3,2,5,4};
   int brr[]={0,0,0,0,0,0,0};
   for(int i=0;i<7;i++){
    brr[arr[i]-1]++;   
}
for(int i=0;i<7;i++){
    printf("%d",brr[i]);
}
return 0;
}