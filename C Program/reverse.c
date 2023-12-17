#include<stdio.h>
int main ()
{
    int n,a,b,c,d,e;
    printf("Enter the number");
    scanf("%d",&n);
    a=n%10;
    //printf("%d",a);
    b=n/10;
    c=b%10;
    d=b/10;
    e=d%10;
    printf("%d%d%d",a,c,e);
    return 0;
}