#include<stdio.h>
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
   int sum  = 0;
   int sum2 = 0;
    for (int i = 0; i <= n; i++)
   {
    if( i == 0 || i % 2 == 0){
        sum = sum + arr[i];
    }
    else if( i % 2 != 0){
        sum2 = sum2 + arr[i];
    }

}
int SUM = sum - sum2;
printf("%d",SUM);
   


return  0;


}