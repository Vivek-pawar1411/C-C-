#include <stdio.h>
int main()
{
    int r, c, A[10][10], i, j;
    printf("enter the number of row and coloumn");
    scanf("%d%d", &r, &c);
    printf("Enter the element");

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            scanf("%d", &A[i][j]);
        }
    }
    printf("Dispaly the element\n");
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}