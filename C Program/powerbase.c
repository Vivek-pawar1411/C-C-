#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the base and  power");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("%d",c);
}