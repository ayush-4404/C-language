#include<stdio.h>
int main()
{
    int x;
    printf("Enter number :");
    scanf("%d",&x);
    if(x<0){
        // printf("Absolute Value is:%d",x*(-1));
       x=x*(-1);
    }
    // else{printf("Absolute Value is:%d",x);}

      printf("Absolute Value is: %d",x);


    return 0;
}