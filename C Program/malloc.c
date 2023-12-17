#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char name[20];
    char *address;
    strcpy(name, "hello world");
    address = (char *)malloc(50 * sizeof(char));
    strcpy(address, "hello computer");
    printf("%s\n", name);
    printf("%s\n", address);
   // free();
    return 0;
}