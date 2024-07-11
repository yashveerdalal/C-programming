#include<stdio.h>
int main(){

    // remainder without using % 


    int a ,b, z , r;
    printf("Enter the 1st number :");
    scanf("%d",&a);
    printf("Enter the 2nd number :");
    scanf("%d",&b);

    z = a/b;
    r = a - ( z * b);




    printf("the remainder of the number is %d",r);





    return 0;
    
    }
