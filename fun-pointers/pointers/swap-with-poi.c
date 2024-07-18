#include<stdio.h>
void swap(int *a , int *b){

  int temp = *a ;
  *a  = *b ;
  *b = temp ;
  return ;
}



int main(){

    int a;
    int b;

    printf("enter 1st number :");
    scanf("%d",&a);
    printf("enter 2nd number :");
    scanf("%d",&b);
    int *x = &a;
    int *y = &b;
    swap(x,y);

     printf(" 1st number is  : %d",a);
     printf(" 2nd number is  : %d",b);
     }