#include<stdio.h>
int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int noOFmatches;
        float average;
    } cricketer ;
    
     // 3 cricketers
    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s %d %d %f",arr[i].name,&arr[i].age,&arr[i].noOFmatches,&arr[i].average);
    }
    for(int i=0;i<3;i++){
        printf("name:%s\n",arr[i].name);
        printf("age:%d\n",arr[i].age);
        printf("no. of matchhes played:%d\n",arr[i].noOFmatches);
        printf("average:%f\n",arr[i].average);
    }
    return 0;
}