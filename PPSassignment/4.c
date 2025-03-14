#include<stdio.h>
#include<math.h>
#include<float.h>
float integrate(float coeff,float power,float x0){
    return ((coeff/(power+1))*pow(x0,power+1));
}
int main(){
    float x0;
printf("enter x0");
scanf("%f",&x0);
//power should always be entered in descending order there is a extra sign
    printf("Enter the equation in order coefficient power +- ");
    float coeff,power;
    char c;
    float ans=0;
 do{
    scanf("%f %f %c",&coeff,&power,&c);
if(c='+')
ans+=integrate(coeff,power,x0);
else
ans-=integrate(coeff,power,x0);
 }
while(power>0);
 printf("integration at x = %f is %f",x0,ans);
    return 0;
}