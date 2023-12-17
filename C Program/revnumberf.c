#include<stdio.h>
void revnumber();

  int a,i;
int main()
{
  
    printf("Enter the number");
    scanf("%d",&a);
    revnumber();
    
    return 0;
}
void revnumber()
{
    for ( i = a; i >=1; i--)
    {
        printf("%d\t",i);
    }
    
}