#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
   scanf("%[^\n]s",str);
        int x=strlen(str);
        if(x>10){
            printf("%c%d%c",str[0],x-2,str[x-1]);}
    return 0;

}