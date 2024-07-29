#include<stdio.h>
typedef int* pointer;
int main(){
    int x = 5;
    int y = 10;
    /* int *a = &x;
    int *b = &y; */

    pointer a = &x , b = &y;


    printf("%p\n",a);
    printf("%p",b); 


    return 0;
}