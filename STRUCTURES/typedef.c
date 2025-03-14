#include<stdio.h>
typedef float dec;
int main(){
    int x=5;
    float y =5.9;
    dec z=7.86;
    printf("%f",z);

    typedef struct pokemon{
        int hp;
        int attack;
        char tier;
    
    } pok;
    //struct pokemon xyz;
    pok xyz;
    printf("enter attack:");
    scanf("%d",&xyz.attack);
    printf("enter hp:");
    scanf("%d",&xyz.hp);
    printf("enter tier:");
    scanf("%c",&xyz.tier);

    printf("%d %d %c",xyz.hp,xyz.attack,xyz.tier);

    
    struct pokemon pikachu;
    pikachu.attack =80;
    pikachu.hp=50;
    pikachu.tier='A';

    printf("\n%d %d %c",pikachu.hp,pikachu.attack,pikachu.tier);

    return 0;
}