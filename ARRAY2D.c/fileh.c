// #include <stdio.h>
// int main(){
// FILE* ptr=fopen("cw.txt","r");
// char str[100];
// while(fgets(str,100,ptr)!=NULL)
// printf("%s",str);
//     return 0;
// }
#include <stdio.h>
int main(){
FILE* ptr=fopen("a.txt","w");
char str[100]="hello my name is ayush\npqr";
fputs(str,ptr);
fclose(ptr);
    return 0;
}