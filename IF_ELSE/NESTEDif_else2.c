#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // if(n%5==0 || n%3==0){
    //     if(n%15!=0){
    //         printf("%d is divivble by 5 or 3 but not divisible by 15",n);
    //     }
    //     else{printf("%d is divisible by 5 or 3 as well as 15",n);}
    // }
    
    // else{printf("%d is not divisble by 5 or 3",n);}
      
    if((n%5==0 || n%3==0) && n%15!=0){ // hierarchy of operator:&&>||
        printf("%d is divisible by 5 or 3 but not 15",n);
    }
    else{printf("%d is not matching the required condition",n);}


    return 0;
}



