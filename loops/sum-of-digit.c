#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int sum = 0;
int last;
for (int i = 0; n >0 ; i++)
{
    last = n % 10;

    sum = sum + last;
    n = n / 10 ;
    

}

printf("%d",sum);
return  0 ;


}