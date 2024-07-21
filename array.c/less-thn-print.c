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
    for (int i = 0; i <= n; i++)
   {

    if (arr[i]<35)
    {
       printf("the student will roll number %d failed in exams\n",i);
    } }
   


return  0;


}