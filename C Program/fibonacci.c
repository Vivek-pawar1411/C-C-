#include <stdio.h>
int main() {

  int a,b=0,c=1,d,i=3;
  printf("Enter the number");
  scanf("%d",&a);
  printf("%d\t%d\t",b,c);
  do{
    d=b+c;
    printf("%d\t",d);
    b=c;
    c=d;
    i=i+1;
  }
  while(i<=a);


  return 0;
}
