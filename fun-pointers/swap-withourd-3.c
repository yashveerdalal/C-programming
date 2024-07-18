// Online C compiler to run C program online
#include<stdio.h>
int main(){
    int a;
    int b;
    int temp;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);

    a =  a + b ;
    b = a - b ;
    a = a - b;


   printf("a is %d\n",a);
   printf("b is %d",b);
    
    
}