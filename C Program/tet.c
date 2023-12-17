#include<stdio.h>
int fibo(){
    
  int a,b=0,c=1,d,i=3,temp;
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


  return d;


}
int main()
{
   int v= fibo();
 
 printf("%d\t",v);
 return 0;   
}