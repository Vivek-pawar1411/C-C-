#include <stdio.h>
void swap();
int a, b;
int main()
{
    printf("Enter the two value");
    scanf("%d%d", &a, &b);
    swap();
    printf("after swapping a=%d,b=%d", a, b);
    return 0;
}
void swap()
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    //printf("after swapping a=%d,b=%d", a, b);
}
