#include<stdio.h>
int main(){
    int a=25;
    int* x=&a; //int* -> int ka address store krta hai
    int** b=&x; //int** -> int* ka address store krta hai
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%p\n",&x);  
    printf("%p\n",b);
    printf("%d\n",*x);
    printf("%d\n",**b);
    return 0;

}