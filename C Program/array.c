
#include <stdio.h>

int main()
{
    int A[10],n,i,sum=0,average=0;
    printf("Hello World");
    scanf("%d",&n);
    printf("Enter the eleement");
    for (int i = 1; i <= n; i++) {
        scanf("%d",&A[i]);
    }
        printf("sum of the element");
        for (int i = 1; i <= n; i++) {
               sum+=A[i];
               average=sum/n;
        }
            printf("%d\n",average);


    return 0;
}
