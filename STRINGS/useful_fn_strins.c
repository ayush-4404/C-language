#include<string.h>
#include<stdio.h>
int main(){
    char str[25]="hello  world";
    // int x=strlen(str);   //1 returns the length of string
    // printf("\n%d",x);

    // printf("\n");
    // char s2[12];
    // strcpy(s2,str);  //2 for making a deep copy
    // printf("%s",s2);

    printf("\n");
    char str2[]="ayush";
    strcat(str,str2);  //3.
    printf("%s\n",str2);
    printf("%s\n",str);

    char a1[]="ayush raj";
    char a2[]="ayush raj";
    int p=strcmp(a1,a2);   //4. compares two string
    printf("%d",p); 

    
    return 0;
}