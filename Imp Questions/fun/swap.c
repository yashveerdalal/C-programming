#include<stdio.h>
int main(){
    int a = 5;
    int b = 10;
    a = a+ b ;
    b = a - b ;
    a = a - b;
    printf("%d",a);
}