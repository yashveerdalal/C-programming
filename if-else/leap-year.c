#include<stdio.h>
int main(){
    int n;
    printf("Enter the year : ");
    scanf("%d",&n);
    if (  n % 100 == 0 && n % 400 == 0  ){
        printf("leap year ");

    }
  else  if (n % 100 !=  0 && n % 4 == 0){
        printf("leap year"); 
    }
    else {
        printf("not a  leap year ");
    }

}