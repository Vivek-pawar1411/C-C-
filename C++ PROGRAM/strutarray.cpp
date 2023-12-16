#include <iostream>
using namespace std;
struct student
{
    int roll;
    int age;
    char name[20];
};

int main()
{
    struct student s[3];
    int i;
    cout << "Enter the  student info :" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "Enter Info of student " << i + 1 << endl;
        cout << "Enter the roll" << endl;
        cin >> s[i].roll;
        cout << "Enter the name" << endl;
        cin >> s[i].name;
        cout << "Enter the age" << endl;
        cin >> s[i].age;
    }
    cout << "Display the student info :" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "Info of student " << i + 1<<endl;
        cout << "roll = " << s[i].roll << endl;
        cout << "name = " << s[i].name << endl;
        cout << "age = " << s[i].age << endl;
        cout << "###########Info of student ############" << endl;
    }
}