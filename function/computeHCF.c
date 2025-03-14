#include<stdio.h>
int gcd(int a, int b){
    int count;
    for(int i=a;i>1;i--){
        if(a%i==0&&b%i==0){
            count =i;
            break;
        }
    }
    return count;
}
int main(){
    int x,y;
    printf("enter two numbers:");
    scanf("%d %d",&x,&y);
    int hcf =gcd(3,4);
    printf("%d",hcf);

    return 0;
}