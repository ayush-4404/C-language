#include<stdio.h>
int main()
{
   

    // for(int i=1;i<=100;i++){
    //     if(i%2!=0)
    //     printf("%d ",i);
    // }

    for(int i=1;i<=100;i++){
        if(i%2==0){
        continue;} //continue means us round ko skip kr do
        printf("%d ",i);
    
    }
        


    return 0;
}