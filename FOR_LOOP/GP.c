#include<stdio.h>
int main()
{
    int n;
    printf("ENTER n: ");
    scanf("%d",&n);
    int a=2;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=2*a;
       
    }
    return 0;
}