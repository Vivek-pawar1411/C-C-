#include<stdio.h>
struct stud
{
    int rollno;
    char name[20];
    int age;
} A1;

union student
{
    int rollno ;
    char name [20];
    int age;
}u;
 int main ()
 {
       printf("for structure\n");
       printf("Enter the rvalues\n");
       scanf(("%d",&A1.rollno),("%s",&A1.name),("%d",&A1.age));
         printf("%d\n",A1.rollno,"%s\n",A1.name,"%d\n",A1.age);
         
          printf("for union\n");
       printf("Enter the rollno\n");
           scanf("%d",&u.rollno,"%s",&u.name,"%d",&u.age);
    printf("%d\n",u.rollno,"%s\n",u.name,"%d\n",u.age);
    
    return 0;
 }