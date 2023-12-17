//string concate


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
    
    printf("display%s\n",strcat(A,B));
           // printf("display\n");

      //puts(A);
     // puts(B);

    return 0;
}