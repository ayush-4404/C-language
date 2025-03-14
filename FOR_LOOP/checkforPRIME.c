#include<stdio.h>
int main()
{
        int n;
    printf("ENTER ANY NUMBER: ");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
        a=1;
        
        break;  
    }
    }
    if(n==1) printf("1 IS NIETHER PRIME NOR COMPOSITE");
   else if(a==0)
    printf("GIVEN NUMBER IS PRIME\n");
    else printf("GIVEN NUMBER IS COMPOSITE\n");
   
    return 0;
    
}