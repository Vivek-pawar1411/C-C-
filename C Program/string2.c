//string compare 

#include<stdio.h>
#include<string.h>
int main()
{
    char A[10];
    char B[10];
    int d;
    printf("Enter the char A\n");
    
   // scanf("%s",A);
       gets(A);

   printf("Enter the char B\n");
   //scanf("%s",B);
   gets(B);
    d=strcmp(A,B);
    printf("display\n%d",d);

           // printf("display\n");

      //puts(A);
     // puts(B);

    return 0;
}