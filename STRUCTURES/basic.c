#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int attack;
        char tier;
    
    };
    struct pokemon xyz;
    printf("enter attack:");
    scanf("%d",&xyz.attack);
    printf("enter hp:");
    scanf("%d",&xyz.hp);
    printf("enter tier:");
    scanf(" %c",&xyz.tier);

    printf("%d %d %c",xyz.hp,xyz.attack,xyz.tier);


    struct pokemon pikachu;
    pikachu.attack =80;
    pikachu.hp=50;
    pikachu.tier='A';

    struct pokemon mewtoo;
    mewtoo.attack=130;
    mewtoo.hp=100;
    mewtoo.tier='G';

    return 0;
}