#include<stdio.h>
int mini(int x, int y){

if ( x > y )
{
   return x;
}
else{
    return y;
}


}


int main(){
    int a ;
    int b ;
    printf("enter 1st number :");
    scanf("%d",&a);
    printf("enter 2nd number :");
    scanf("%d",&b);
    int min = mini(a,b);
    printf(" the greater number is %d",min);
}