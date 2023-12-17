#include <stdio.h>
#define SIZE 5
void accept(int a[8], int size);
void display(int *a, int size);
int binary_search(int a[5], int size, int key);
int main()
{
    int arr[SIZE], find, ans;
    printf("Enter the element\n");
    accept(arr, SIZE);
    printf("Element of array \n");
    display(arr, SIZE);

    printf("\n enter element to search :: ");
    scanf("%d", &find);

    ans = binary_search(arr, SIZE, find);
    if (ans != -1)
        printf("\n %d is found at %d location\n", find, ans);
    else
        printf("\n %d is not found in array \n", find);
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
        printf("a[%d]=%d\t", i, *(a + i));
        // scanf("%d",&a[i]);
    }
    return;
}

int binary_search(int a[], int size, int key)
{
    int mid = 0, l = 0, r = size - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        printf("\n left=%d mid=%d right=%d key=%d arr[%d] =%d", l, mid, r, key, mid, a[mid]);
        if (key == a[mid])

            return mid; /* code */
        if (key > a[mid])

            l = mid + 1; /* code */
        if (key < a[mid])

            r = mid - 1; /* code */
    }
    return -1;
}
