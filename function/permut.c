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

    printf("nPr=%d",fact(n)/fact(n-r));
    return 0;
}
