
#include <stdio.h>
int main()
{
    FILE *fp;
    // char  ch[100];
    fp = fopen("myfile.txt", "r");
    int ch = getc(fp);
    while (ch != EOF)
    {
        putchar(ch);
        ch = getc(fp);
    }
    if (feof(fp))
    {
        printf("done");
    }
    else

        printf("not done");

    fclose(fp);
    getchar();

    return 0;
}