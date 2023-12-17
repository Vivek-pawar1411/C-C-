//string string 

#include<stdio.h>
#include<string.h>
int main()
{
    char A[30];
    char B[10];
    printf("Enter the char A\n");
    
   // scanf("%s",A);
       gets(A);

   printf("Enter the char B\n");
   //scanf("%s",B);
   gets(B);

   // printf("display\n%s",strncat(A,2,B));
    printf("display %s\n",strchr(A,'i'));
    return 0;
}