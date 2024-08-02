#include<stdio.h>
#include<string.h>
int main(){
typedef    struct  book
    {
       int noofpages;
       int price;
       char name[50];
    }Book ;

    Book A1;
    strcpy(A1.name,"yash");
    printf("%s",A1.name);
    
}