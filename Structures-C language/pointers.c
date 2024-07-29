#include<stdio.h>
#include<string.h>
typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        int tier;
        char name[50];
    }pokemon;

int main(){
   
    pokemon pikachu;
    pikachu.hp = 100;
    
    pokemon *x = &pikachu;
    printf("%p\n",x);
    int *y = &pikachu.hp;
    printf("%p",y);


    return 0;
    
}

//features of pointers in struct 

// the address of the struct is the address of tha data stored in the first attribute of the struct itself