#include <iostream>
using namespace std;
struct student
{
    int roll;
    int age;
    char name[20];
} s1, s2, s3;

int main()
{
    cout << "Enter the roll" << endl;
    cin >> s1.roll;

    cout << "Enter the age" << endl;
    cin >> s1.age;

    cout << "Enter the name" << endl;
    cin >> s1.name;

    cout << "Enter the roll" << endl;
    cin >> s2.roll;

    cout << "Enter the age" << endl;
    cin >> s2.age;

    cout << "Enter the name" << endl;
    cin >> s2.name;

    cout << "Enter the roll" << endl;
    cin >> s3.roll;

    cout << "Enter the age" << endl;
    cin >> s3.age;

    cout << "Enter the name" << endl;
    cin >> s3.name;
    cout << "-------------------------------------------------" << endl;

    cout << "###########Info of student 01############" << endl;
    cout << "roll = " << s1.roll << endl;
    cout << "age = " << s1.age << endl;
    cout << "name = " << s1.name << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "###########Info of student 02############" << endl;
    cout << "roll = " << s2.roll << endl;
    cout << "age = " << s2.age << endl;
    cout << "name = " << s2.name << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "###########Info of student 03############" << endl;
    cout << "roll = " << s3.roll << endl;
    cout << "age = " << s3.age << endl;
    cout << "name = " << s3.name << endl;
    cout << "-------------------------------------------------" << endl;

    return 0;
}