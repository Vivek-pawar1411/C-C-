
#include <stdio.h>

int main()
{
    float a,b,c;
    char op;

    printf("Hello World");
    scanf("%d%d",&a,&b);
    printf("Enter the op");
    scanf("% c",&op);
    switch (op){
        case '+':
        c=a+b;
        printf("%d",c);
        break;
          case '-':
        c=a-b;
        printf("%d",c);
        break;
          case '*':
        c=a*b;
        printf("%d",c);
        break;
        default :
        printf("no op");
        break;
    }
    return 0;
}
