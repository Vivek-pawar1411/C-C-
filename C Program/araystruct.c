#include <stdio.h>
struct student
{
    int rollno;
    char name[30];
    int age;
};
int main()
{
    struct student stud[5];
    int i;
    for (int i = 1; i <= 3; i++)
    {
        printf("Student %d\n", i);
        printf("Enter the roll no ");
        scanf("%d ", &stud[i].rollno);
        printf("Enter the name");
        scanf("%s ", &stud[i].name);

        printf("Enter the age");
        scanf("%d ", &stud[i].age);
    }

    printf("display the data");
printf("Student %d\n", i);
        printf("Enter the roll no ");
        scanf("%d ", &stud[i].rollno);
        printf("Enter the name");
        scanf("%s ", &stud[i].name);

        printf("Enter the age");
        scanf("%d ", &stud[i].age);
    return 0;
}
