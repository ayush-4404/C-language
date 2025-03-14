#include<stdio.h>
#include<limits.h>
int main()
{
   

     int a[7]={5,4,21,7,9,14,18};
     int greatest = INT_MIN;
     int sMAX=INT_MIN;
    
     for(int i=0;i<=6;i++)
    {
       if(a[i]>greatest)
        greatest =a[i];
     }
    for(int i=0;i<=6;i++){
        if(a[i]!=greatest && sMAX<a[i])
        {
            sMAX=a[i];
        }
    }
    printf("%d",sMAX);
    return 0;
}