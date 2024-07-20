#include<stdio.h>
// sorting here basically means converting array into Ascending or descending order

// bubble sort basically use  the concept of swap 2 numbers 

//multiple passses maybe required to sort element using bubble  sort 

// after the 1st pass the largest element will reach to its final destination that is on the last index 
// same will be repeated for rest of the elements too 


// IF THERE ARE N ELEMENTS IN THE ARRAY THE MAX PASSES WILL BE N-1 

// AFTER EVRY PASS WE NEED TO  APPPLY BUBBLE SORT T0 UNSORTED ELEMENTS 0NLY AND WE NEED NOT CHECK  THE LARGEST ELEMENT 


int main(){

    int n; 
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
    printf("enter the element %d of array",i);
    scanf("%d",&arr[i]);
    }
   
    for (int i = 0; i < n-1; i++)
    {

         for (int j = 0; j < n-2; j++)
         {
            if ( arr[j]>arr[j+1])
            {
              int temp;
              temp   = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;

            }
            
         }
         

   
   }
   for (int i = 0; i <= n; i++)
   {

    printf("%d  ",arr[i]);
    
   }

   
   


      return  0;
}




