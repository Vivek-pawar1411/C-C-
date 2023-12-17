#include<stdio.h>
int main()
{
    char c;
    printf("Enter teh symbol");
    scanf("%c",&c);
    if (c>=65 &&c<=90)
    {
        printf("uppercase");
    }
    else if (c>=97 && c<=122)
    {
        printf("lowercase");
    }
    else if (c>=48 && c<=57)
    {
        printf("numeric");
    }
    
    
    
}