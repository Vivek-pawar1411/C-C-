#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int age;
    void accept()
    {
        cout << "Enter the name" << endl;
        cin >> name;
        cout << "Enter the roll" << endl;
        cin >> roll;
        cout << "Enter the age" << endl;
        cin >> age;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No. = " << roll << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    student s1;
    s1.accept();
    cout << "Detail of student :" << endl;
    s1.display();
    return 0;
}