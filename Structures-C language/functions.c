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






void fun(pokemon x ){
    printf("%d",x.hp);
    return ;

 
}
int main(){
   
   pokemon a;
   a.hp = 90;
   fun(a);

    return 0;
    
}