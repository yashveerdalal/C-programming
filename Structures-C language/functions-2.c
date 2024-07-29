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
    printf("%d\n",x.hp);
    return ;}

void change(pokemon w){
    w.attack = 50 ;
    w.speed = 60 ;
    w.hp = 70 ;

}





int main(){
   
   pokemon a;
   a. hp = 90;
   a. speed = 90;
   a. attack = 90;
   fun(a);
   change(a);
   printf("%d\n",a.hp);


// so it just specify that struct works on the principle of pass by value nad not pass by ref 


    return 0;
    
}