#include <stdio.h>
struct employ
{
    int empid;
    char name[10];
    int group;
};
void display(struct employ a[], int n)
{
    // int i,A[20],n;

    for (int i = 0; i < n; i++)
    {
        printf("empid =%d\n",a[i].empid);
        printf("empname=%s\n",a[i].name);
         printf("empid =%d\n",a[i].group);
    }
}
int main()
{
    // int n;
    struct employ a[2];

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

      

        display(a, 2);
    
    return 0;
}