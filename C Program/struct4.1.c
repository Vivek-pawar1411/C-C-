#include <stdio.h>
struct employ
{
    int empid;
    char name[10];
    int group;
};
void insert(struct employ a[], int n)
{
    printf("Enter the data");
    for (int i = 0; i <2; i++)
    {
                  fflush(stdin);

    printf("Employe no. %d\n", i);

        printf("Enter the empid no ");
        scanf("%d", &a[i].empid);
        printf("Enter the name");
        scanf("%s",&a[i].name);
         printf("Enter the group no ");
        scanf("%d", &a[i].group);
    }

      
}
int main()
{
    // int n;
    struct employ a[2];
        insert(a, 2);


    printf("display the data");
    for (int i = 0; i <2; i++)
    {
        printf("empid =%d\n",a[i].empid);
        printf("empname=%s\n",a[i].name);
         printf("empid =%d\n",a[i].group);
    }

      

    
    return 0;
}