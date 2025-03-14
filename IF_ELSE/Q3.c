#include<stdio.h>
int main()
{
    int CP,SP;
    printf("Enter Selling price: ");
    scanf("%d",&SP);
    printf("Enter Cost price: ");
    scanf("%d",&CP);

    if(SP>CP){
        printf("The seller has made a profit of : %d",SP-CP);
      
    }
    if(SP==CP){
        printf("NO PROFIT NO LOSS");

    }
   if(SP<CP)
   {printf("The seller incurred a loss of : %d",CP-SP);}

   return 0; 
}