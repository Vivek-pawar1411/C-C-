#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int age;
};
int main()
{
    struct student s={24,"disha",22};
    printf("\n%d",s.rollno);
    printf("\n%s",s.name);
    printf("\n%d",s.age);

}