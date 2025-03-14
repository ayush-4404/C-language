#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter co-ordinates of point:");
    scanf("%d %d",&x,&y);
   
   if(x==0){
    if(y==0)
    printf("Point Lies on origin");
    else 
    printf("Point lies on Y-axis");
    }
  else{
    if(y==0)
    printf("Point lies on X-axis");
    else
     printf("Point doesn't lie on either X-axis or Y-axis ");
  }


    return 0;
}