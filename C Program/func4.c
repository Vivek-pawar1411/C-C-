//no agrument with retrun type
#include<stdio.h>
int cube();
int main()
{
    int ans=0;
    ans=cube();
    printf("%d",ans);
}

int cube()
{
    int a,b=0;
    printf("Enter the value");
    scanf("%d",&a);
    b=a*a*a;
    return b;
}