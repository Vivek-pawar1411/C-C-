#include <stdio.h>
#include <string.h>
void accept();
void print();
char c[20];
char d[20];
int main()
{

    accept();
    print();

    return 0;
}
void accept()
{

    printf("Enter the string 1");
    gets(c);
    printf("Enter the string 2");
    gets(d);
}
void print()
{

    printf("display the string\n"); 
    printf("string 1 = %d\n", strlen(c));
    printf("string 2 = %d\n", strlen(d));
    printf(" uppercase = %s\n", strupr(c));
     printf(" uppercase = %s\n", strupr(d));
    printf("sub string %s\n", strstr(c,("disha")));
    printf(" campare =%d\n", strcmp(c, d));
    printf(" copy = %s\n", strcpy(c, d));
    printf(" concrate = %s\n", strcat(c, d));
}
