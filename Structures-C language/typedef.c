#include<stdio.h>  // also known as macros 
#include<string.h>

typedef int intg;  // typedef BASICALLY ALLOW US TO  CHANGE THE NAME OF THE SYSTEM DEFINED FUNCTIONS WITHOUNT CHANGING THEIR WORKING 


int main(){

    intg x = 9;
    printf("%d",x);
    typedef struct book
    { 
        intg number_of_pages;
        float price;
        char name[50];
       
    } Book;
    struct book a ;
    a.number_of_pages = 195;
    a.price =55;
    strcpy(a.name,"GOT");

    Book b;
    strcpy(b.name,"seven sisters");
    printf("%s",b.name);




    return 0;
}