//string length 

#include<stdio.h>
#include<string.h>
int main()\
{
    char A[10];
    char B[10];
    printf("Enter the char A\n");
    
    scanf("%s",A);
   printf("Enter the char B\n");
   scanf("%s",B);
    
    printf("display\n%d\n%d",strlen(A),strlen(B));
           // printf("display\n");

      //puts(A);
     // puts(B);

    return 0;
}