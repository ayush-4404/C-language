#include<stdio.h>
int main()
{
    int n;
    printf("ENTER n: ");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<=n;i++){   //loop n baar chlega, uske andar a print hota rhega value update kr kr  ke 
        printf("%d ",a);
        a=a+3;
    }
   
    return 0;
}