#include<stdio.h>
void swap(int* p,int* q){
    int temp;
    temp =*p;
    *p=*q;
    *q=temp;
    return;

}
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<=j;i++,j--){
        swap(&arr[i],&arr[j]);
    }
}
int main(){
    int a[]={3,5,2,1,3,8,9,};
    int n=sizeof(a)/4;
    reverse(a,1,3);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]); 
    }
    return 0;
}