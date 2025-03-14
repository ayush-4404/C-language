#include<stdio.h>
void swap(int* p,int* q){
    int temp;
    temp =*p;
    *p=*q;
    *q=temp;
    return;
}
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("a is %d and b is %d\n",a,b);
    int* x=&a;
    int* y=&b;
    swap(x,y);
    printf("a is %d and b is %d",a,b);
    return 0;
}