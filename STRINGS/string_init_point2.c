#include<stdio.h>
#include<string.h>
int main(){
    char str[]="college Wallah is best channel on youtube for coding";
    char* ptr=str;
    printf("%s\n%s\n",ptr,str);
    ptr ="physics wallah";
    printf("%s\n%s",ptr,str);

    return 0;
}