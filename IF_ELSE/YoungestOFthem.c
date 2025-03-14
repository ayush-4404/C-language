#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the age of Ram:");
    scanf("%d",&a);
    printf("Enter the age of Shyaam:");
    scanf("%d",&b);
    printf("Enter the age of Ajay:");
    scanf("%d",&c);

    if(a<b && a<c){printf("Ram is the youngest of them");}
    if(b<a && b<c){printf("Shyaam is the youngest of them");}
    if(c<b && c<a){printf("Ajay is the youngest of them");}


    return 0;
}