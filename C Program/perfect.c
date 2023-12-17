#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i, perfect,temp;
    printf("Enter the number");
    scanf("%d",&a);
    for ( i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            perfect+=i;
        }
        
    }
    if(a==perfect){
        printf("it is perfect number");
    }
    else{
        printf("it is not perfect number");
    }

    return 0;
}
