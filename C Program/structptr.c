
#include <stdio.h>
#include<string.h>
//#Pragma pack (1)

struct stud{
    int roll;
    char name[20];
    
}s1;

int main()
{
    struct stud *pt;
    pt=&s1;
    printf("Enter the roll \n");
    scanf("%d",&s1.roll);
    printf("Enter the name \n");
    scanf("%s",&s1.name);
    
    printf("the detail\n");
    printf("roll = %d",pt->roll);
    printf("roll = %s",pt->name);


    return 0;
}
