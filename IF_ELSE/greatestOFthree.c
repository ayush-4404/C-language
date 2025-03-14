#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter numbers :");
    scanf("%d %d %d",&a,&b,&c);
    // printf("Enter 2nd number :");
    // scanf("%d",&b);
    // printf("Enter 3rd number :");
    // scanf("&d", &c);
    if(a>b && a>c){
        printf("&d is the greatest ",a);
    }
    if(b>c && b>a){
        printf("%d is the greatest ",b);
    }
    if(c>a && c>b){
        printf("%d is the greatest ",c);
    }

    
    return 0;

}