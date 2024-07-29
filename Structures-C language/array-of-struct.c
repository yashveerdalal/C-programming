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
    
    
pokemon arr[3];
arr[0].attack = 50 ;
arr[0].hp = 70;
arr[0].tier ='A';
arr[0].speed = 90;
strcpy(arr[0].name,"pikachu");

arr[1].attack = 150 ;
arr[1].hp = 170;
arr[1].tier ='S';
arr[1].speed = 190;
strcpy(arr[1].name,"charizard");

arr[2].attack = 510 ;
arr[2].hp = 710;
arr[2].tier ='Z';
arr[2].speed = 910;
strcpy(arr[2].name,"mewto");

for (int i = 0; i <3; i++)
{
    printf("%d\n",arr[i].attack);
    printf("%d\n",arr[i].speed);
    printf("%d\n",arr[i].hp);
    printf("%c\n",arr[i].tier);
    printf("%s\n",arr[i].name);
   
}


// array of user defined datatype 

    return 0;
}