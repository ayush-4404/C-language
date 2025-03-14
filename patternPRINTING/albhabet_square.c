#include<stdio.h>
int main()
{
    int n;
    printf("ENTER n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        int a=65;
        for(int j=1;j<=n;j++){          
           char ch=(char)a;
        printf("%c ",ch);
        a++;
        }

        printf("\n");


    }


    return 0;
}