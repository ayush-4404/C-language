#include<stdio.h>
int main(){
   int x=4 ,y,z;
   y=--x; // means decrement then use x
   z=x--; // means use x and then decrement
   printf(" %d %d %d",x,y,z);


    int a=4,b=3,c;
    c = a-- - b;
    printf("\n %d %d %d",a,b,c);
    return 0;
}