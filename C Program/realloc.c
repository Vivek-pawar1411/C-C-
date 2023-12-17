#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char *p;
    int m1 = 20;
    int m2 = 25;
    p = (char *)malloc(m1);
    strcpy(p, "hello world");
    p = (char *)realloc(p, m2);
    strcat(p, "dishacomputer");
    printf("%s", p);
    free(p);
   // printf("%5s", p);

    return 0;
}