#include<stdio.h>
#include<string.h>
int main(){
    struct book
    {
        int price;
        int num_of_pages;
        char name[50];
    }book1 , book2 , book3;

    for (int i = 1; i < 4; i++)
    {
        if(i==1){
        printf("Enter the price of book%d ",i);
        scanf("%d",&book1.price);
        printf("Enter the number of pages in  book%d ",i);
        scanf("%d",&book1.num_of_pages);
        printf("Enter the name of book%d ",i);
        strcpy(book1.name,"GOT");}

        if(i==2){
        printf("Enter the price of book%d ",i);
        scanf("%d",&book2.price);
        printf("Enter the number of pages in  book%d ",i);
        scanf("%d",&book2.num_of_pages);}

        if(i==3){
        printf("Enter the price of book%d ",i);
        scanf("%d",&book3.price);
        printf("Enter the number of pages in  book%d ",i);
        scanf("%d",&book3.num_of_pages);}



    }
    

    // char ch[15]; this cant be done string can only be specified on the  time of initialisation 
   // ch = "hello"; 


   // SO IF YOU WANT TO USE STRING IN STR IN  STRUCT THEN THERE IS JUST ONE WAY POSSIBLE AND THAT IS THROUGH POINTERS 

    
 printf("%d\n",book1.price);
 printf("%d\n",book1.num_of_pages);
 printf ("%s\n",book1.name);
        





}