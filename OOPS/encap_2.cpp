// encapsulation setter and getter method

#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;
    float sal;

public:
    string setname(string nam)
    {
        name = nam;
    }
    void setage(int ag)
    {
        age = ag;
    }
    void setsal(float salary)
    {
        sal = salary;
    }
    string getnam()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    float getsal()
    {
        return sal;
    }
};
int main()
{
    int b;
    float c;
    string a;
    cout << "Enter the name = " << endl;
    cin >> a;
    cout << "Enter the age = " << endl;
    cin >> b;
    cout << "Enter the salary = " << endl;
    cin >> c;
    person p1;
    p1.setname(a);
    p1.setage(b);
    p1.setsal(c);
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Employ detail : "<<endl;
    cout<<"Name = "<<p1.getnam()<<endl;
    cout << "Age = "<<p1.getage() << endl;
    cout <<"Salary = "<<p1.getsal() << endl;
    return 0;
}