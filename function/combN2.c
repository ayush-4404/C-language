#include<stdio.h>
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
      
    }
      return f;
}
int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    //int nCr=fact(n)/(fact(r)*fact(n-r));
    //printf("%d",nCr);
    printf("%d",fact(n)/(fact(r)*fact(n-r)));
    return 0;
}