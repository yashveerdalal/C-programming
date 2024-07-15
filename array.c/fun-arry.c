#include<stdio.h>
void change(int x){

    x = 8;
    return ;
}

void CHANGE(int x[]){

    x[2] = 100;
    }

int main(){
    int a = 4;
    change(a);
    printf("%d\n",a);

    int arr[4]={1,2,3,4};
    CHANGE (arr);
    printf("%d",arr[2]);

// VERY IMP OBSERVATION IS THAT INT PASSES THROUGH VALUE WHEREAS ARRAY BY REFERENCE




}