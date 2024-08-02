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
int max = arr[0];
for (int i = 1; i < n; i++)
{
    if (arr[i]> max)
    {
      max = arr[i];
    }
    
}

printf("the max value in the array is %d",max);
return 0;



}