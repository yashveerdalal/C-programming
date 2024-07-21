#include<stdio.h>
int linear(int arr[] , int size , int element ){
    for (int i = 0; i < size; i++)
    {
       if ( arr[i] == element )
       {
        return i;
       }
       
    }
    return -1;
}
int main(){
    // linear srch is done through array traversal 
    //srch is eliminated when the element is found or the array is array is ends during the srch 
    // it will work for both sorted as well as unsorted array 

int arr[] ={2,3,6,54,23,35,43,53,6,587,876,5,654,645,90,2,31};
int ans = linear(arr,17,587);
printf("%d",ans);
    return  0;

}