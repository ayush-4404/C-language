#include<stdio.h>
int nCr(int n,int r){
    int f=1,e=1,d=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    for(int i=1;i<=r;i++){
        e*=i;
    }
    for(int i=1;i<=(n-r);i++){
        d*=i;
    }

    int combination=f/(d*e);
    
    return combination;
    
}
int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    int result=nCr(n,r);
    printf("total possible combinations are %d ",result);
    return 0;

    
}
