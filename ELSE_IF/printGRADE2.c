#include<stdio.h>
int main()
{
    int n;
    printf("Enter percentage of marks:");
    scanf("%d",&n);

    if(90<n)
    printf("EXCELLANT");
    else{
        if(80<n)
        printf("VERY GOOD");
        else{
            if(70<n)
            printf("GOOD");
            else{
                if(60<n)
                printf("CAN DO BETTER");
                else{
                    if(50<n)
                    printf("AVERAGE");
                    else{
                        if(40<n)
                        printf("BELOW AVERAGE");
                        else
                        printf("FAIL");
                    }
                }
            }
        }
    }
    return 0;
}