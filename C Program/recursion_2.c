#include <stdio.h>
int fibo();
int main()
{
    int n, fact, i;
    printf("Enter the number");
    scanf("%d", &n);
  for ( i = 0; i <n; i++)
  {
        printf("%5d\t", fibo(i));

  }
  

    return 0;
}
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return(fibo(n-1)+fibo(n-2));
    }
}