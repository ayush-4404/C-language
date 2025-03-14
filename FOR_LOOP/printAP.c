#include<stdio.h>
int main(){

int n;
printf("ENTER n:");

scanf("%d",&n);
for(int i=1;i<=2*n-1;i=i+2){ //ap starting from 1 with common difference =2
    printf("%d ",i);
}
    return 0;
} 