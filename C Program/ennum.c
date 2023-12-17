#include<stdio.h>
enum week{mon =5,tue,wed,thus=8,fir,sat ,sun}days;
void month()
{
  int  days,i;
  for ( i = mon; i <=sun; i++)
  {
    printf("%d\n",i);
  }
  
   // printf("%d\n",days);
     
}
int main()
{
    days=sat;
    printf("%d\n",days);
    month();
    return 0;
}
