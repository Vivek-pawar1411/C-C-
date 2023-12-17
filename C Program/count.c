#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i=0;
    printf("Enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
      a/=10;
      i++;  
    }
    printf("%d",i);
    return 0;
}
