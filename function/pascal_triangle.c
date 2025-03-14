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
    int n;
    printf("enter n:");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i+1;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj=nCr(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}
