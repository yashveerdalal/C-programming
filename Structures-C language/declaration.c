#include<stdio.h>
int main(){

    struct pokemon  // user defined  datatype 
    {
        int hp;
        int speed;   // these all are just like the attributes 
        int attack;
        char tier;

    };

    struct pokemon pikachu;
    printf("Enter the attack of pikachu");
    scanf("%d",&pikachu.attack);
    pikachu.hp = 10 ;
    pikachu.speed = 50 ;
    pikachu.tier = 'A';
    

    struct pokemon charizard;
    charizard.attack = 100;
    charizard.hp = 200;
    charizard.speed = 70;
    charizard.tier = 'S';

    printf("%d",pikachu.attack);


    return 0;

}