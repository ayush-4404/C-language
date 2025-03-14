#include<stdio.h>
int main(){
    int n=5;
    int* x=&n;
    *x=34;
    // int* x;
    // x=&n;
    printf("%p\n",&n); //%p se address print hota hai
    printf("%p\n",x); // ye address of n print kr rha hai
    printf("%p\n",&x); //ye address of x print krega 
    printf("%d\n",*x);  // ye value ko point kr rha hai
    printf("%d\n",x); //
    printf("%d\n",n);
    printf("%p",&*x); // ye n ki or point kr rha hai, hence uski address print kr rha 
    return 0;
}