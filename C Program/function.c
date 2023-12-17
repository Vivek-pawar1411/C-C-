#include<stdio.h>
void addition();
void subtraction();
  int a,b,c;
int main()
{
  
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    addition();
    subtraction();
    return 0;
}
void addition()
{
    c=a+b;
    printf("Addtition");
    printf("\n%d+%d=%d",a,b,c);
}
void subtraction()
{
    c=a-b;
    printf("\nSubtraction");
    printf("\n%d+%d=%d",a,b,c);
}
