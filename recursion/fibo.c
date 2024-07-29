#include<stdio.h>
int fibo( int n  ){

    if( n == 2 || n == 1) return 1;
    int ans  = fibo(n-1) + fibo( n-2 );
    return ans;




}

int main(){

    int n;
    printf("Enter The Number :");
    scanf("%d",&n);
   int Ans =  fibo(n);
   printf("%d",Ans);


}