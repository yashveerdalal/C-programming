#include<stdio.h>
int sum( int a , int b){
    if( a == 0) return 0;
    b = b + sum( a -1 , b +1 );
    return b;

}





int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    sum(n, 0);

    int Ans = sum(n, 1);
    printf("%d",Ans);
     
   

    return 0;

}