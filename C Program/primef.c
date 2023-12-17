#include<stdio.h>
int num,i,c,temp;
int prime()
{
printf("Enter the number");
scanf("%d",&num);
    for (i = 1; i <= num ; i++)
  {
      if (num % i == 0)
        {
            c++;
        }
    } 
   if(c==2)
      {
        return 1;
      }
    else

    {

       return 0 ;
    }
}
 int main()
 {
    int V= prime(temp,num);
    printf("%d",V);
    return 0;
 }