#include<stdio.h>
int main(){

    int n ; 
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
   for (int i = 0; i <= n; i++)
   {
    printf("enter the element %d   of array",i);
    scanf("%d",&arr[i]);
   }
    int max = arr[0];
    for (int i = 1; i < n; i++)
   {

   if (max < arr[i])
    {
        max = arr[i];
    }
 }
  printf("%d",max);
   
   return  0;


}