#include<stdio.h>
int main(){
    int n ;  // no of rows 
    int m ; // no of columns
    scanf("%d",&n);
    scanf("%d",&m);
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
}