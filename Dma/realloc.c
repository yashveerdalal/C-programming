#include<stdio.h>
#include<stdlib.h>
int main(){
    int * ptr;
     ptr = ( int *)malloc(3 * sizeof(int))  ;
        for (int i = 0; i < 3; i++)
        {
               scanf("%d",& ptr[i]);
        }


              for(int i = 0; i < 3; i++){
             printf("%d\n",ptr[i]);
    
}
 ptr = ( int *)realloc(ptr ,5* sizeof(int))  ;
        for (int i = 0; i < 5; i++)
        {
               scanf("%d",& ptr[i]);
        }


              for(int i = 0; i < 5; i++){
             printf("%d\n",ptr[i]);
    
}



        
    
}
 
