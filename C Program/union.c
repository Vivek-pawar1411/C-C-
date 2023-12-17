#include<stdio.h>
union student
{
    int rollno ;
    char name [20];
    int age;
}u;
int main()
{
  
  printf("Enter the rollno ");
  scanf("%d",&u.rollno);
  printf("%d\n",u.rollno);

printf("Enter the name ");
  scanf("%s",&u.name);
  printf("%s\n",u.name);
 

printf("Enter the age ");
  scanf("%d",&u.age);
  printf("%d\n",u.age);

return 0;
}
