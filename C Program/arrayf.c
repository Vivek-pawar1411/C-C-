#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int age;
};

void display (struct student s)
{
    printf("%d\n",s.rollno);
    printf("%s\n",s.name);
    printf("%d\n",s.age);

}
void insert(struct student s){
    printf("Enter the rollno");
    scanf("%d",&s.rollno);
     printf("Enter the name");
    scanf("%s",&s.name);
     printf("Enter the age");
    scanf("%d",&s.rollno);
}

int main()
{
   
   
  struct  student st;
   insert(st);
   display(st);
   return 0;
}