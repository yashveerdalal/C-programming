#include<stdio.h>
int ncr1(int n , int r){
    int nfact = 1;
    int rfact = 1;
    int nrfact = 1;
    
for (int i = n; i != 1; i--)
{
    nfact = nfact*i ;
}
for (int i = r; i != 1; i--)
{
    rfact = rfact*i ;
}
for (int i = (n-r); i != 1; i--)
{
    nrfact = nrfact*i ;
}







return nfact/(rfact*nrfact);
}

int main(){
    int n ;
    int r ;
    printf("enter the value of n ");
    scanf("%d",&n);
    printf("enter the value of r ");
    scanf("%d",&r);
int ans = (ncr1(n,r));
printf("%d",ans);
}