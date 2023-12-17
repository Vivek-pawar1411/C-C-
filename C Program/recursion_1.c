/*#include <stdio.h>
int sum();
int main()
{
    int n, fact, c;
    printf("Enter the number");
    scanf("%d", &n);
    c = sum(n);
    printf("%d", c);

    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n + sum(n - 1));
    }
}*/

#include <stdio.h>
int sum();
int main()
{
    int n, fact, c, i;
    printf("Enter the number");
    scanf("%d", &n);

    printf("%d\t", sum(n));

    return 0;
}
int sum(int n)

{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (n + sum(n - 1));
    }
}
