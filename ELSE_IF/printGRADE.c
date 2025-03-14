#include<stdio.h>
int main()
{
    int n;
    printf("Enter percentage of marks:");
    scanf("%d",&n);

    if(90<n && n<=100){
    printf("EXCELLANT");
    }
    else if(80<n && n<=90)
    {
        printf("VERY GOOD");
    }
    else if(70<n && n<=80)
    {
        printf("GOOD");
    
    }
    else if(60<n && n<=70)
    {
        printf("CAN DO BETTER");
     }
      else if(50<n && n<=60)
    {
        printf("AVERAGE");
    }
    else if(40<n && n<=50)
    {
        printf("BELOW AVERAGE");
    }
    
   else 
   {
    printf("FAIL");
   }
    return 0;
}