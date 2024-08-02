#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {   
       printf("enter the elements of array : ");
       scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
       
       for (int j = 0; j < n-2; j++)

       {
       
        if (arr[j]>arr[j+1])
        {

        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;

            
        }}}
for(int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    
}


}