#include <stdio.h>
int reverse(int *pn, int *pm);
int main()
{
    int n, rem, ans = 0;

    printf("Enter the number");
    scanf("%d", &n);
    reverse(&n, &ans);

    printf("%d", ans);
    return 0;
}
int reverse(int *pn, int *pm)
{
    int rem;
    do
    {
        rem = (*pn) % 10;
        (*pm) = (*pm) * 10 + rem;
        (*pn) = (*pn) / 10;

    }while (*pn!=0);
   // while(*pn>0);
}
