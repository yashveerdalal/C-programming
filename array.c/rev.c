#include<stdio.h>
void rev( int x[], int n ){
    int i = 0 ;
    int j = n ;
    while(i <j){
      int temp = x[i];
        x[i] = x[j];
        x[j]= temp ;
        j--;
        i++;
    }
    return ;
    }
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

   rev(arr,n);
   for (int i = 0; i <= n; i++)
   {
   
    printf("%d ",arr[i]);
   }

return  0;
}