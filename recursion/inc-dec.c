#include<stdio.h>
void inc_dec(int n){
    if( n == 0 ) return ;
    printf("%d\n",n);
    inc_dec(n-1);
    printf("%d\n",n);
    return ;


}



int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    inc_dec(n);

}