#include<stdio.h>
int  main(){
int n;
printf("enter the size of array :");
scanf("%d",&n);
int arr[n];
for (int i = 0; i < n ; i++)
{

    printf("enter the %d element of array ",i);
    scanf("%d",&arr[i]);
}

for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j ++)
    {
       if ( arr[i] == arr[j])
       {
        printf("%d is the duplicate element in the array \n", arr[i]);
       }
       
    }
    
}

return 0;



}