#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    printf("Enter Abscissa of 1st point:");
    scanf("%d",&x1);
    printf("Enter Ordinate of 1st point:");
    scanf("%d",&y1);
    printf("Enter Abscissa of 2nd point:");
    scanf("%d",&x2);
    printf("Enter Ordinate of 2nd point:");
    scanf("%d",&y2);
    printf("Enter Abscissa of 3rd point:");
    scanf("%d",&x3);
    printf("Enter Ordinate of 3rd point:");
    scanf("%d",&y3);

    double m1=(y2-y1)/(x2-x1);
    double m2=(y3-y2)/(x3-x2);

    if(m1=m2)
    printf("All the three pointds fall on the same line");
    else 
    printf("All the three pointds doesn't fall on the same line");
   


    return 0;
}