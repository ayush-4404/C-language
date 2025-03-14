#include<stdio.h>
int main()
{  
    // TAKE POSITIVE INTEGER INPUT AND TELL IF IT'S A 3 DIGIT NUMBER
    int n; 
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>99 && n<1000){
        // n is greater than 99 and less than 1000
        // && means both statement should be true
        printf("the number is a 3 digit number");}
    else{
        printf("the number is not a 3 digit number");}


    return 0;
}