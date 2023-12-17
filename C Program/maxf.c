#include<stdio.h>   
 int maxn(int i,int j)
    {
        
    if(i>j)
    return i;
    else
    return j;   
}
int main()
{ 
    int m;
    int x=15,y=20;
   m =maxn(x,y);
   printf("bigger%d",m);
 return 0;
}