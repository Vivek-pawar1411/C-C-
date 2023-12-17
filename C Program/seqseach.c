#include <stdio.h>
#define SIZE 5
void accept(int a[8], int size);
void display(int *a, int size);
int *seq_search(int a[5], int size, int key);
int main()
{
    int arr[SIZE], find, ans,i, ptr = NULL;
    printf("Enter the element\n");
    accept(arr, SIZE);
    printf("Element of array \n");
    display(arr, SIZE);

    printf("\n enter element to search :: ");
    scanf("%d", &find);

    ptr = seq_search(arr, SIZE, find);
    if (ptr == NULL)
        printf("\n %d is not found in array", find);
    else
       // printf("\n %d is found in array at %d position", find, ptr);
  printf("\n %d is found in array at %d position", find, ptr);

    return 0;
}

void accept(int a[5], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    return;
}
void display(int *a, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("a[%d]=%d\t [%u]", i, *(a + i),(a+i));
        // scanf("%d",&a[i]);
    }
    return;
}

int *seq_search(int a[5], int size, int key)
{

    int i;
    for (i = 0; i < size; i++)
    {
        if (*(a + i) == key)
            return (a + i);
    }
    return NULL;
}
