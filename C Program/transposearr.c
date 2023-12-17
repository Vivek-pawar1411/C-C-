#include <stdio.h>
int accept(int arr[2][2]);
int display(int arr[2][2]);
int transpose(int arr[2][2], int trans[2][2]);

int main()
{
    int arr[2][2], trans[2][2];
    printf("enter the matrix");
    accept(arr);
    printf("display the matrix\n");
    display(arr);
    printf("transpose the matrix");
    transpose(arr, trans);

    return 0;
}
int accept(int arr[2][2])
{
    int i, j;
    // printf("Enter the row and col");
    // scanf("%d%d",&r,&c);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    return 0;
}
int display(int arr[2][2])
{
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%5d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int transpose(int arr[2][2], int trans[2][2])
{
    int i, j;

    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 2; j++)
        {

            trans[j][i] = arr[i][j];
        }

        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 2; j++)
        {

            printf("%5d\t", trans[i][j]);
        }

        printf("\n");
    }

    return 0;
}
