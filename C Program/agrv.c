#include<stdio.h>
int main(int argc,char* argv[])
{
    printf("argc is %d\n",argc);
    if(argc>=2)
    {
        printf("the argu \n");
        for (int i = 0; i <argc; i++)
        {
            printf("%c\t",argv[i]);
        }
        
    }
    return 0;
}