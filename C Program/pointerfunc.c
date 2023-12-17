#include<stdio.h>
int abc(int *p ,int b)
{
    *p+=b;
}
int main()
{
    int sal=0,incre=0;
    printf("Enter the salary");
    scanf("%d",&sal);
    printf("Enter the incre");
    scanf("%d",&incre);
    abc(&sal,incre);
    printf("%d",sal);
}