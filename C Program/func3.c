// paramter no return type
//Argument with retrun type
#include<stdio.h>
int  temp(int x, int y);
int main()
{
    int a,b,ans=0;
     printf("Enter the the temp ");
    scanf("%d%d",&a,&b);
    ans = temp(a,b);
    printf("%d",ans);


}
int  temp(int x, int y)
{
            int c;
            c=x+y;
            
    return c;

}
