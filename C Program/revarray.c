#include <stdio.h>
void accept(int arr[]);
void display(int *arr);
void reverse(int *arr);
int main()
{
    int a[5];

    printf("Enter the element\n");
    accept(a);
    printf("\ndisplay the element\n");
    display(a);
    printf("\nreverse the element\n");
    reverse(a);
    return 0;
}
void accept(int arr[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &arr[i]);
    }
    return;
}
void display(int *arr)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=", i);

        printf("%d\t", *(arr + i));
    }
    return;
}

void reverse(int *arr)
{
    int i;
    for (i = 5 - 1; i >= 0; i--)
    {
        printf("a[%d]=", i);

        printf("%d\t", *(arr + i));
    }
    return;
}
