

#include <stdio.h>

int
main ()
{
  int n1, n2,res;
  char op;
  printf ("Hello World");
  scanf ("%d%d", &n1, &n2);
  printf ("Enter");
  scanf ("% c", op);
  switch (op)
    {
    case '+':
      res = n1 + n2;
      printf("%d", res);
      break;
    case '-':
      res = n1 - n2;
      printf("%d", res);
      break;
    case '*':
      res = n1 * n2;
      printf("%d", res);
      break;

    default:
      printf("no op");
      break;
    }

  return 0;
}
