#include<stdio.h>
#include<stdlib.h>
//int main(void)
//int main(int abc,char* xyz[] )  allowed
int main(int argc,char* argv[] )
{
    int index;

    printf("\n  no of argrments =%d\n", argc);
    for(index=0; index<argc; index++)
    {
        printf("%c", argv[index][0]);
    }
    return 0;
}