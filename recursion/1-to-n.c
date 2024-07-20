#include<stdio.h>
void inc(int n , int a ){
    if( n == 0  ) return;
    printf("%d\n",a);
    inc(n-1,a+1);
    
}




int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
     
    inc(n,1);
   

    return 0;

}