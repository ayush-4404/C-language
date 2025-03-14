#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[12]={4,5,19,20,21,4,21,5,19,20,20,12},check;
    for(int i=0;i<12;i++){
        check=0;
        for(int j=0;j<12;j++){    
            if(arr[i]==arr[j]){
                check++;
                //break;
            }
            
            }
            if(check==1){
                printf("%d is an unique element \n",arr[i]);
        }
          
    }
   
    return 0;
}