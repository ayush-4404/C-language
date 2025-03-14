#include<stdio.h>
#include<math.h>
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int x;
    scanf("%d",&x);
    int z=fact(x);
    printf("%d",z);
    return 0;
}