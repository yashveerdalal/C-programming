#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int fact = 1;
    for (int i = n; i > 1; i--)
    {
       fact = fact * i;
    }
    
    printf("%d",fact);

}