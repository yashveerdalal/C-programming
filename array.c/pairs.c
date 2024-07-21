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
   int m ; 
    printf("enter the number to be checked  ");
    scanf("%d",&m);
    int count = 0;
  
    for (int i = 0; i <= n; i++)
   {

    for (int  j = i; j < n ; j++)


   {

    if (arr[i]+ arr[j]== m)
    {
        count++;
    }}}

    printf("%d",count);
   


return  0;


}