#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int age;
};

struct student display()
{
       struct student s;
       printf("Enter the rollno");
    scanf("%d",&s.rollno);
     printf("Enter the name");
    scanf("%s",&s.name);
     printf("Enter the age");
    scanf("%d",&s.age);
    return s;
}
//return s;


int main()
{
   
 
  struct  student e;
   
   e= display();
  printf("%d\n",e.rollno);
   printf("%s\n",e.name);
    printf("%d",e.age);
   return 0;
}