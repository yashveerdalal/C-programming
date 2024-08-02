#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0 ; i <= n; i++)
    {
       if (max<arr[i])
       {
       smax = max;
       max = arr[i];
       }
       
    }
   
    printf("%d",smax);
    
    }