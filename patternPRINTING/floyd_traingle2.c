#include<stdio.h>
int main()
{
    int n,p;
    printf("ENTER n:");
    scanf("%d",&n);
    p=1;
    for(int i=1;i<=n;i=i+1){
        
        for(int j=1;j<=i;j++){
            printf("%d ",p);
            p=p+2;
            
           
        }

       

        printf("\n");


    }


    return 0;
}