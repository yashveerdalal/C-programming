// array has the continuous memory allocation instead of int and long int in that case pc allocate random address 
// in array address is like 4 8 12 16 .....which inc the efficency of pc 

// address of array is basically same as the address of the first element of the array 
// a[0];

#include<stdio.h>
int main (){
    
    int arr[4]={0,4,6,8};
    for (int i = 0; i < 4; i++)
    {
       printf("%p\n",&arr[i]);
    }
    
}
