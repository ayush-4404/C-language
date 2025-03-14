#include<stdio.h>

int add(int p,int q){
    return p+q;
}
int main(){
    int a,b;
    printf("enter 1st number:");
    scanf("%d",&a);
    printf("enter 2nd number:");
    scanf("%d",&b);
    int sum =add(a,b);
    printf("sum is %d",sum);
}