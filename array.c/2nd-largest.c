
#include<stdio.h>
#include<limits.h>
int main(){

    // #include<limit.h> has a function INT_MIN that stores the minimum integer value that can exits in c 
    int n ; 
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
   for (int i = 0; i <= n; i++)
   {
    printf("enter the element %d   of array",i);
    scanf("%d",&arr[i]);
   }
    int max = INT_MIN;
    for (int i = 1; i < n; i++)
   {

   if (max < arr[i])
    {
        max = arr[i];
    }}
   

   int max2 = INT_MIN;
   for (int i = 1; i < n; i++)
   {

   if (max2 < arr[i] && arr[i] != max  )
    {
        max2 = arr[i];
    }
   }

printf("%d",max2);



 


}