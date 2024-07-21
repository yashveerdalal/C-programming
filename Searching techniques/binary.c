//exp of finding a page in a book with a given page number 

// condition of binary srch is that the array must be sorted 

// in this one thr's always a low and a high and the middle is found using these 2

#include<stdio.h>

int binary(int arr[] , int size , int element ){
    int low , mid ,high;
    low = 0;
   high  = arr[size-1];
    while( low <= high){
    mid = (low + high )/ 2;
    if(arr[mid]== element){
        return mid;
    }
    if( arr[mid ]< element ){
        low = mid + 1;}
else{
    high = mid -1 ;
}
}}


int main(){
    // linear srch is done through array traversal 
    //srch is eliminated when the element is found or the array is array is ends during the srch 
    // it will work for both sorted as well as unsorted array 

int arr[] ={1,2,3,4,5,6,7,8,9,10};
int size = sizeof(arr)/sizeof(int);
int ans = binary(arr,10,7);
printf("%d",ans);
    return  0;

}