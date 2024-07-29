#include<stdio.h>
typedef struct person
{
   int age  ;
   int weight ;
}person;



int main(){

   person p1;
   person *x =  &p1;
  // int q = 4;
  // int *p = &q;
  // *q = 7;

  (*x).age = 90;
  printf("%d",p1.age);




    return 0;
}