#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){


     typedef struct pokemon
    {
       int hp ;
       int attack ;
       char tier;
       int speed;
       char name[50];

    }pokemon;

     typedef struct legendary_pokemon{

        pokemon normal;
        char ability[10];



     }legendary_pokemon;




    legendary_pokemon mewto;
    mewto.normal.attack = 100;
    printf("%d",mewto.normal.attack);


    return 0;
}