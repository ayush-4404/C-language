#include<stdio.h>
int main()
{
    int n;
    printf("ENTER ANY NUMBER: ");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
        if(n%i==0){
        printf("GIVEN NUMBER IS COMPOSITE");
        break;  //this is good to check if the given number is composite but we can not comment on it being prime
        }
        //else printf("prime");
    }


    return 0;
}