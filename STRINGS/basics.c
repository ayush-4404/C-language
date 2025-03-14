#include<stdio.h>
int main(){
    // char ch='a';
    // char arr[5]={'a','y','u','s','h'};
    // for(int i=0;arr[i]!='\0';i++){
    //     printf("%c",arr[i]);
    // }
    char brr[]="ayush used to ";
    for(int i=0;brr[i]!='\0';i++){
        printf("%c",brr[i]);
    }
    printf("\n");
    printf("%c",brr[0]);
    printf("\n");
    printf("%c",1[brr]);
    printf("\n");
    printf("%c",*(brr+2));
    printf("\n");
    int i=0;
    while(brr[i]!='\0'){
        printf("%c",brr[i]);
        i++;
    }
    
    
    return 0;
}