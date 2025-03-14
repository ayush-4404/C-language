# include<stdio.h>
int fact(int a){
if(a==0) return 0;//base case
if(a==1) return 1;//base case
return fact(a-2)+fact(a-1);
}
int main(){
int a;
scanf("%d",&a);
printf("%d",fact(a));
    return 0;
}