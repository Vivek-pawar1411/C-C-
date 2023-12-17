#include <stdio.h>
void addition (int *a,int *b)
{
    int sum;
    sum=*a + *b;
    printf("add = %d ",sum);
return;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("after swap %d %d\n", *a, *b);
    return;
}
int main()
{
    int n, m;
    printf("Enter the value of n");
    scanf("%d", &n);
    printf("Enter the value of m");
    scanf("%d", &m);
    swap(&n, &m);
    addition(&n,&m);

    return 0;
}