#include<stdio.h>
int main()
{
   
   int a[6]={2,7,5,6,1,7},p;
   

   for(int i=0;i<=2;i++){
   p=a[i];
   a[i]=a[5-i];
   a[5-i]=p;
   }
    for(int i=0;i<=5;i++)
    printf("%d\n",a[i]);
    
    return 0;
}