


#include<stdio.h>
void inc(int x){
    if(x == 0) return ;
    
    inc(x - 1);

    printf("%d\n",x);
    return ;
}




int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
     inc(n);
   

    return 0;

}