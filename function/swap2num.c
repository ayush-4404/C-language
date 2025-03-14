#include<stdio.h>
int swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    return x,y;
}
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("a is %d and b is %d\n",a,b);
    swap(a,b);
    printf("a is %d and b is %d",a,b);
    return 0;
}