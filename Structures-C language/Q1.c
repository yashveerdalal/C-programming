#include<stdio.h>
#include<string.h>
int main(){

    typedef struct leaderboard
    {
        char name[50];
        int age;
        int number_of_matches;
        float avg_runs;

    }Leaderboard;
    
    Leaderboard arr[5];

    for (int i = 1; i <= 5; i++)
    {
       printf("Enter the name of player number %d :",i);
       scanf("%s",arr[i].name);
       printf("Enter the age of player number %d :",i);
       scanf("%d",&arr[i].age);
       printf("Enter the number of matches of player number %d :",i);
       scanf("%d",&arr[i].number_of_matches);
       printf("Enter the Avg runs of player number %d :",i);
       scanf("%f",&arr[i].avg_runs);

    }

 for (int i = 1; i <= 5; i++)
    {
      
      printf("%s\n",arr[i].name);
    
      
       printf("%d\n",arr[i].age);
       
       printf("%d\n",arr[i].number_of_matches);
       
       printf("%f",arr[i].avg_runs);

    }
   
    
    

    return 0;

}