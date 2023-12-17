#include<stdio.h>
#include<string.h>
union data
{
    int i;
    float f;
    char str[10];
}d;
int main ()
{
    d.i=15;
    printf("d.i %d\t",d.i);
     d.f=0.345;
        printf("d.f %f\t",d.f);
   strcpy(d.str,"c hello world");
    printf("d.str %s\t",d.str);
return 0;
}
