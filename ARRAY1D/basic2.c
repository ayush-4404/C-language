#include<stdio.h>
int main()
{
    float price[3];
    printf("enter price of 3 :");
    scanf("%f %f %f",&price[0],&price[1],&price[2]);
    price[0]=price[0]+(18.0/100)*price[0];
    price[1]=price[1]+(18.0/100)*price[1];
    price[2]=price[2]+(18.0/100)*price[2];

    printf("\nprice of 1st item after adding gst =%f",price[0]);
    printf("\nprice of 2nd item after adding gst =%f",price[1]);
    printf("\nprice of 3rd item after adding gst =%f",price[2]);

   
    
    return 0;
}