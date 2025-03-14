#include<stdio.h>
int fib(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    return (fib(n-1)+fib(n-2));
}
int main(){
    int n;
    scanf("%d",&n);
    int flag=0,i=0;
    for(i=0;fib(i)<n;i++);
    
        if (fib(i)==n)
        {
            printf("Present");
            flag++;
        }
        else{
            printf("not present");
        }
       
//    for(int i=0;fib(i)<=n;i++)
//     {
//         if (fib(i)==n)
//         {
//             printf("Present");
//             flag++;
//         }
       
//     }
//     if(flag==0){
//         printf("not present");
//     } checking
// printing
    // for(int i=0;i<n;i++){

    //     printf("%d ",fib(i));
    // }
    return 0;
    }