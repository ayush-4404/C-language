#include<stdio.h>
#include<limits.h>
int main()
{
    //printf("%d ",INT_MAX);

     int a[7]={5,4,21,7,9,14,18};
     int greatest = INT_MIN;
     
    for(int i=0;i<=6;i++){
       
     if(a[i]>greatest)
     greatest =a[i];
             
        
       
    }
    printf("%d",greatest);
    

    //  int a[7]={5,4,21,7,9,14,18};
    //  int greatest =a[0];
     
    // for(int i=0;i<=6;i++){
       
    //  if(a[i]>greatest)
    //  greatest =a[i];
             
        
       
    // }
    // printf("%d",greatest);
    

    return 0;
}