//parameter with no retrun type

#include<stdio.h>
int prod(int a,int b);
int main()
{
    int d,e;
    printf("Enter the value of d,e ");
    scanf("%d%d",&d,&e);
    prod(d,e);
    
}

int prod(int a,int b)
{
    int ans=0;
  // ans = a+b;
   printf("answer %d",a+b);

}

