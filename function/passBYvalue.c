#include<stdio.h>
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    return;

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
//x and y are changed,
// a and b are not.