#include<stdio.h>
#include<string.h>
int main(){
    char str[]="college Wallah is best channel on youtube for coding";
    //char* ptr =&str[0];
    char* ctr =str; //ctr points to str[0]
    int i=0;
    while(*ctr!='\0'){
        printf("%c",*ctr);
        ctr++;
        i++;
    }

    //printf("%p\n",&str[0]);
    //printf("%p\n",str);  // kisi v array/string ka address uske first element ka address hota hai
    // printf("%p",ptr);
    // printf("\n%p",ctr);
    return 0;
}