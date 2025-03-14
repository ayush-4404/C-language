#include<stdio.h>
int main()
{
    int n;
    
    printf("enter n:");
    scanf("%d",&n);

    int a[n];
    printf("enter numbers :");
    for(int i=0;i<=n-1;i++)
    scanf("%d",&a[i]);

    //  int a[]={1,1,3,3,3,3,3,2,4,2,7,9,7,9};
     
     for(int i=0;i<=n-1;i++){
        int p=0;
        for(int j=0;j<=n-1;j++){
            if(a[i]==a[j])
            p++;
        }
        if(p<2)
        printf("%d",a[i]);

        }
    
     
   

    return 0;
}