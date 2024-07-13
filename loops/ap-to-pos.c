#include<stdio.h>
int main(){
   
    // an  = a + ( n -1 )* d

    // 100 = 1 + ( n - 1)* 3
    // 100 = 1 + 3n -3 
    // 100 = 3n - 2
    // 100 + 2 = 3n ;
    //  n  = 34

    int n = 100;

    for (int i = 0; i < 34; i++)
    {
        printf("%d\n",n);
        n = n - 3;


    }


    
    
    





}