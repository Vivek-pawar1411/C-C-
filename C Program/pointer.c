
#include <stdio.h>

int main()
{
    int num =45;
    int *p;
    p=&num;
    int **pi;
    pi=&p;
    printf("num %d\n",num);
    printf(" num add %d\n",&num);
    printf(" p %d\n",p);
    printf(" *pi %d\n",*pi);
    printf(" *p %d\n",*p);
    printf(" &p %d\n",&p);
    printf("  **pi %d\n",**pi);
    printf(" pi %d\n",pi);
    

    return 0;
}
