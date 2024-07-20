#include<stdio.h>
int power(int x, int y){
    if ( y == 0) return 1;
    int ans = x * power(x , y -1 );
    return ans;
    
}




int main(){

    int n, m ;
    printf("Enter the number and power :");
    scanf("%d%d",&n,&m);
    int ans = power(n,m);
    printf("%d",ans);

    return 0;

}