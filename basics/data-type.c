#include<stdio.h>
int main(){

    // rest all data types are treated as normally as we do in math except the float one 
    int x = 5;
    int y = 2;
    printf("%d\n",x/y); //its gonna return 2 as answer instead of 2.5 
    // as the compiler will return the greatest integer function 

    // here below is the exp for float data type 

    float a = 5;
    int b = 2;
    printf("%f\n",a/b);

    //div  in float data type 

    

    float z = 5/2 ;
     printf("%f\n",z);

    int  c = 5;
     float d = 2;
    printf("%f",c/d);





    return 0;
}