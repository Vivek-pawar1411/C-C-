#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int age;
} A1;
int main()
{
    A1.rollno;
    A1.name[10];
    A1.age;
    printf("Enter the roll no:");
    scanf("%d",&A1.rollno);
    printf("Enter the age:");
    scanf("%d",&A1.age);
     printf("Enter the name:");
    scanf("%c",&A1.name);
    getchar();
           


    printf("Display the data\n");
     printf("\nEnter the roll no:%d",A1.rollno);
    printf("\nEnter the age:%d",A1.age);
     printf("\nEnter the name:%c",A1.name);

    return 0;
}
