#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    //scanf("%s",str);
   // gets(str);
    scanf("%[^\n]s",str);
    printf("the first word is :%s",str);
}