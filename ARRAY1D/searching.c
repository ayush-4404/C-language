#include<stdio.h>
#define x 9
int main()
{
    int arr[]={2,3,4,5,6,7,12,13};
    int n=sizeof(arr)/4,check=0;;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("%d is present in the array",x);
            printf("\nindex of %d is %d",x,i);
            check++;
            break;
        }

    }
    if(check==0)
    printf("\n%d is not present in the array",x);
    return 0;
}
