#include <stdio.h>
int main()
{

    int r, c, i, j;
    int A[10][10];

    int B[10][10];

    int sum[10][10];

    

    printf("Enter the element of array A");

    for (int i = 0; i < 3; i++)

    {

        for (int j = 0; j < 3; j++)

        {

            scanf("%d", &A[i][j]);
        }
    }
   
    printf("Enter the element of array B");

    for (i = 0; i < 3; i++)

    {

        for (j = 0; j < 3; j++)

        {

            scanf("%d", &B[i][j]);
        }
    }
    printf("addition of array\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            sum[i][j] = A[i][j] + B[i][j];

            printf("%5d\t", sum[i][j]);
        }

        printf("\n");
    }
    printf("multiply of array\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            sum[i][j] = A[i][j] * B[i][j];

            printf("%5d\t", sum[i][j]);
        }

        printf("\n");
    }
  
    return 0;
}
