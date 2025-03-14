#include<stdio.h>
#include<string.h>

int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        char tier;
        char name[15];
    } pokemon; 
    pokemon arr[3];
    arr[0].attack=100;
    arr[0].hp=80;
    arr[0].tier='A';
    strcpy(arr[0].name ,"pikachu");

    arr[1].attack=70;
    arr[1].hp=50;
    arr[1].tier='B';
    strcpy(arr[1].name,"Mewtoo");

    arr[2].attack=170;
    arr[2].hp=180;
    arr[2].tier='S';
    strcpy(arr[2].name,"charizard");

    for(int i=0;i<3;i++){
        printf("%d\n%d\n%c\n%s\n",arr[i].hp,arr[i].attack,arr[i].tier,arr[i].name);
    }


    return 0;
}