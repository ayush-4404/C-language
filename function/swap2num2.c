#include<stdio.h>
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("a is %d and b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is %d and b is %d\n",a,b);

    return 0;

}