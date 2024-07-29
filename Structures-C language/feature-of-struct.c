#include<stdio.h>
#include<string.h>

int main(){

      typedef struct pokemon
    {
       int hp ;
       int attack ;
       char tier;
       int speed;
       char name[50];

    }pokemon;

    pokemon a ,b ,c;
    a.attack = 100;
    a.hp = 50;
    a.speed = 45;
    strcpy(a.name,"pikachu");
    a.tier = 'A';

    // IN THIS PART WE ARE GONNA LEARN WHOE TO COPY THE ATTRIBUTES OF 1 TO ANOTHER 
    b = a;
    printf("%s",b.name);
    




    return 0;


}