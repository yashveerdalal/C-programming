#include<stdio.h>
int main(){

typedef struct date
{
    int day;
    int month;
    int year;

}date;

date a ,b ;

a.day = 1;
a.month = 11;
a.year = 2004;

b = a;
b.day = 2;

if(a.day == b.day)
{
    printf("same");
}
else{printf("not same");}


//USER DEFINED DATA TYPE CAN BE COMPARED INDIVIDUALLY 







return 0;
}