#include <stdio.h>
int recus();
int main()
{
    int n, fact, c;
    printf("Enter the number");
    scanf("%d", &n);
    c = recus(n);
    printf("%d", c);

    return 0;
}
int recus(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n * recus(n - 1));
    }
}