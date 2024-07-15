
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number :");
    scanf("%d",&n );
    n = n + 65;
    for (int i = 65; i < n ; i++)
    {
       for ( int j = 65 ; j < i ; j++)
       {
         
         printf("%c ",j);


       }
       printf("\n");
       
    }
    
    
    
    
    }