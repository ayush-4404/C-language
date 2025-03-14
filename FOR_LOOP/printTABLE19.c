#include<stdio.h>
int main()
{
    for(int i=1;i<=380;i++){
        if(i%19==0)
        printf("%d ",i);
    }
    
    // for(int i=19;i<=380;i=i+19){
    // printf("%d\n",i);
    // }
    return 0;
}