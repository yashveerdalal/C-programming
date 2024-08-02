#include<stdio.h>
#include<limits.h>
int main(){
    int n ;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        int min =  INT_MAX;
        int mindex = -1;
      for (int j = i; j < n-1; j++)
      {
        if (arr[j]< min)
        {
           min = arr[j];
           mindex = j; 
        }
        int temp = arr[i];
        arr[i] = min;
        arr[mindex] = temp ;

        
      }
      
    }

     for (int i = 0; i < n; i++)
            {
                printf("%d\n",arr[i]);
            }
    return 0;    
    
}