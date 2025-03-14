#include<stdio.h>
int main(){
    char s1[]="Physics Wallah";
    char* s2=s1; // this is known as shallow copy

    s1[0]='M';
    printf("%s\n%s",s1,s2);

printf("\n");
    // deep copy
    char str[]="ayush mishra writing";
    int size=0,i=0;
    while(str[i]!='\0'){
        
        size++;
        i++;
    }
    printf("%d\n",size);
    char new[size];
    for(int i=0;i<size;i++){
        new[i]=str[i];

    }
    printf("%c\n",str[20]);
    printf("%s\n",str);
    printf("%s",new);
    return 0;
}