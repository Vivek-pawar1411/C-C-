#include<stdio.h>
void type_float()
{
   //explicit 
    int x=60,y=14;
    float res;
    res=x/y;
    printf("before %f\n",res);
    res=(float)x/y;
        printf("after %f\n",res);
  return ;

}
void type_char()
{
    //implicit
    int a=40;
    float res=0;
    char b='c';
    a=a+b;
   res=a+2.0;
    printf("%f",res);

}

int main ()
{
    type_float();
    type_char();
    return 0;
}