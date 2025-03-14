#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("enter a string");
    //gets(str);  // ye automatically \n v de deta hai
    scanf("%[^\n]s",str);
    int size=0,i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);
    for(int i=0;i<size/2;i++){
        char temp=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;
    }

    puts("the reverse is:");

    puts(str);
return 0;
}
