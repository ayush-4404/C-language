//write a function to insert a new charecter in a string at a given index
// insert l between o and l(push at 2nd index)
#include<stdio.h>
#include<string.h>
#define n 5
int main(){
    char str[]="College";
    int size=0,i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    for(int i=6;i>=n;i--){
        str[i+1]=str[i];

    }
    str[n]='k';
    puts(str);
    

    return 0;
}