#include <iostream>
using namespace std;
class student
{
public :
    int roll;
    string name;
    int marks;


    void accept()
    {
        cout << "Enter the roll" << endl;
        cin >> roll;
        cout << "Enter the name" << endl;
        cin >> name;
        cout << "Enter the marks" << endl;
        cin >> marks;
    }
    void display()
    {
        cout << "roll no = " << roll << endl;
        cout << "name = " << name << endl;
        cout << "marks  = " <<marks << endl;
    }
};
int main()
{
    student s1;
    s1.accept();
   s1.display();
}