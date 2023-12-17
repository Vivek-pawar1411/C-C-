#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,*p;
    printf("Enter the size");
    scanf("%d",&n);
    p=  (int *)calloc(n,sizeof(int));
    for( int i = 0; i <=n; i++)
    {
        
            printf("%d\n",*(p+i));
        

    }
    

    return 0;
}