/*#include<stdio.h>
int main()
{
    int i,j,A[2][3]={{1,2,3,},{4,5,6}};
    for( int i = 0; i < 2; i++)
      {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d",i);
            printf("][%d",j);
            printf("]");
            printf("=%d",A[i][j]);
            printf("\n");
           // printf("\t%d",A[j]);
        }
        
    }
    return 0;
} */


//In matrix form

#include<stdio.h>
int main()
{
    int i,j,A[2][3]={{1,2,3,},{4,5,6}};
    for( int i = 0; i < 2; i++)
      {
        printf("[");
        for (int j = 0; j < 3; j++)
        {
            //printf("%d",i);
           // printf("%d",j);
            
          printf("%d\t",A[i][j]);
            
        
        }
           printf("]");
        printf("\n");
     
    }
    return 0;
}