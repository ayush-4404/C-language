#include<stdio.h>
int main(){
typedef int* point;    
int x=5,y=4;
//int* a=&x,b=&y;   // without typedef error deta hai
point a=&x,b=&y;


printf("%p %p",a);
return 0;
}