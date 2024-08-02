#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            smax = max;
            max = arr[i];
        }
        else if ( arr[i]>smax)
        {
           smax = arr[i];
        }
        
        
    }
    printf("%d",smax);
    
    
}