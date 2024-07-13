#include<stdio.h>
int main (){

    int n ;
    printf("Enter the number to be Checked ");
    scanf("%d",&n);

    int a = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a++;
        }
        
    }
    
if ( a > 0 || n == 1 )
{
   printf(" not a prime number");
}
else{
    printf("prime number");
}}