#include <stdio.h>
int main()
{
    int a, b = 0, temp;
    printf("Enter the number");
    scanf("%d", &a);
    temp = a;
    while (a > 0)
    {
        b = b * 10;
        b = b + a % 10;
        a = a / 10;
    }
    printf("%d\n", b);
    if (temp == b)
    {
        printf("it is palindrone number");
    }
    else
    {
        printf("not palindrone");
    }
    return 0;
}
