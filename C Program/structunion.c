#include<stdio.h>
//#_Pragma pack (1)
struct stud
{
    int rollno;
    char name[10];
    int age;
} A1;

union student
{
    int rollno ;
    char name [20];
    int age;
}u;

int main()
{
    printf("for structure\n");
    printf("Enter the roll no:");
    scanf("%d",&A1.rollno);
    printf("Enter the age:");
   scanf("%d",&A1.age);
     printf("Enter the name:");
    scanf("%s",&A1.name);
    //getchar();
  
    printf("rollNo:%d\nAge=%d\nName=%s",A1.rollno,A1.age,A1.name);
      

      printf("for union\n");
  printf("Enter the rollno ");
  scanf("%d",&u.rollno);
//  printf("%d\n",u.rollno);

printf("Enter the name ");
  scanf("%s",&u.name);
 // printf("%s\n",u.name);
 

printf("Enter the age ");
  scanf("%d",&u.age);
 // printf("%d\n",u.age);
    printf("rollNo:%d\nName=%s\nAge=%d",u.rollno,u.name,u.age);
      
   

}