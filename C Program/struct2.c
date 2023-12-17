#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int age;
};
int main()
{
    struct student A;
    char disha;
    A.rollno=55;
    strcpy(A.name,vivek);
    A.age=18
    printf("Enter the roll no:");
    scanf("%d",&A.rollno);
    printf("Enter the age:");
    scanf("%d",&A.age);
   //  printf("Enter the name:");
    //scanf("%c",&A.name);
    getchar();
           


    printf("Display the data\n");
     printf("\nEnter the roll no:%d",A.rollno);
    printf("\nEnter the age:%d",A.age);
     printf("\nEnter the name:%c",A.name);
    
}
