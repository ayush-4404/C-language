#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{
        int hp;
        int attack;
        char tier;
    
    };
    typedef struct legendarypokemon{
        struct pokemon normal;
        char ability[10];
    } legn;
    legn abc;
    abc.normal.attack=100;
    abc.normal.hp=70;
    abc.normal.tier='A';
    strcpy(abc.ability,"pressure");

    printf("%d %d %c %s",abc.normal.attack,abc.normal.hp,abc.normal.tier,abc.ability);



    // struct pokemon xyz;
    // printf("enter attack:");
    // scanf("%d",&xyz.attack);
    // printf("enter hp:");
    // scanf("%d",&xyz.hp);
    // printf("enter tier:");
    // scanf("%c",&xyz.tier);

   
     return 0;
}