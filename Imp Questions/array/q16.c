#include<stdio.h>
int main(){
int n ;
int m ;
printf("enter the size of an array :");
scanf("%d",&n);
printf("enter the number ");
scanf("%d",&m);
int arr[n];
int pair = 0;
for (int i = 0; i < n; i++)
    {
        printf("enter the marks of student :");
        scanf("%d",&arr[i]);
    }
for (int i = 0; i <=n; i++)
{
    for (int j = i+1; j <=n; j++)
    {
        if (arr[i]+ arr[j] == m)
        {
            pair++;
        }
        
    }
   
    
    
    
    
}
 printf("%d\n",pair);
    
   

return 0;



}