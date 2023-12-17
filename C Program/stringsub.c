//string string 

#include<stdio.h>
#include<string.h>
int main()
{
    char A[50];
    char B[50];    
   printf("Enter the char A\n");
    
    scanf("%s",A);
      // gets(A);

   printf("Enter the char B\n");
   scanf("%s",B);
  // gets(B);

    printf("display = %s",(strstr(A,(B))));

    return 0;
}