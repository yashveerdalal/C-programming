
#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    
    for (int i = 0; n != 0 ; i++)
    {
        int last = n % 10;
        printf("%d",last);
        n =  n /  10;
        
    }
    
}