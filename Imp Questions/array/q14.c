#include<stdio.h>
int main(){
int n ;
printf("enter the size of an array :");
scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
    {
        printf("enter the marks of student :");
        scanf("%d",&arr[i]);
    }
for (int i = 0; i < n; i++)
{
    if (i % 2== 0)
    {
       arr[i] = arr[i]*2;
    }
    else if (i %2 != 0 )
    {
        arr[i] = arr[i]+10;
    }
    
    
}
for (int i = 0; i < n; i++)
    {
         printf("%d\n",arr[i]);
    }
   

return 0;



}