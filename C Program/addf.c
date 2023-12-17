#include <stdio.h>
int fact = 1, a, i;
int factorial()
{
    printf("Enter the number");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    //  printf("factorial %d",fact);

    return fact;
}
int main()
{
    int A = factorial(fact);
    printf("factorial of number%d", A);
    return 0;
}
