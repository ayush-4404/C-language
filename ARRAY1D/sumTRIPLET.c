#include<stdio.h>
#define sum 12
int main()
{
    int count=0;
    int arr[]={6,2,0,5,3,2,2,9,7,1,1,4,4,3,8,12,15,9,10};
    for(int i=0;i<=18;i++){
        for(int j=i+1;j<=18;j++){
            for(int k=j+1;k<=18;k++){
                 if(arr[i]+arr[j]+arr[k]==sum){
                    count++;
                    printf("%d+%d+%d=12\n",arr[i],arr[j],arr[k]);

                 }
                
            }
           
        
         }  
    }
    printf("total number of such triplets is %d ",count);
    return 0;
}