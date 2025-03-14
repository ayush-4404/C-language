#include<stdio.h>
#include<string.h>
int main(){
    char* ptr="college Wallah is best channel on youtube for coding";
    char str[]="ayush raj is me";
    //str ="aysu"; // we can't modify the whole string at a time
    // in pointer initialisation we can do so
    ptr ="ayush wallah is";
    puts(ptr);
    printf("%s",str);
    
    // charecter's pointer can also be used to store string
    /* such direct initialisaton using pointers results in a read only memory alocation
    of charecter array and hence causes undefined beaviour, trying to change charecters*/
    //printf("%s\n",ptr);
    //ptr='a';
   // printf("%s\n",ptr);
    


    return 0;
}