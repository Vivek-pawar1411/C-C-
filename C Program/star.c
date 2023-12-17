
#include <stdio.h>

int main()
{
    int i, j;
    printf("Hello World\n");

    printf("-----------------------------------------------------\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int z = 1; z <= 2 * i - 1; z++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
