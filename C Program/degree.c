#include<stdio.h>
int main ()
{
    float cel,feh;
    printf("enterthe temp");
    scanf("%f",&feh);
    cel=5/9.0*(feh-32);
    printf("%f",cel);
    return 0;
}