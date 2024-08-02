#include<stdio.h>
int main(){

    int n;
    printf("enter the number of stu");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the marks of student :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if ( arr[i]< 35)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;

    





}