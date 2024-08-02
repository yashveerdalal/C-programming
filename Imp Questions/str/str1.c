#include<stdio.h>
int main(){
    char s[] ="yashvee";
    int len = 0;
    char temp;
    while (s[len] != '\0')
    {
      len++;

    }
    printf("lenth of this string is %d\n",len);
    for (int i = 0; i < (len/2-1); i++)
    {
       temp = s[i];
       s[i] = s[len - 2 -i ];
       s[len -2 - i]  = temp;

    }
    printf("%s",s);
    
    
}