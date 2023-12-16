#include<iostream>
using namespace std;
union student
{
    int roll;
    int age;
    char name[20];
}u1,u2,u3;
int main()
{
    cout<<"Enter the roll"<<endl;
    cin>>u1.roll;

    cout << "Enter the age" << endl;
    cin >>u1.age;

    cout << "Enter the name" << endl;
    cin >>u1.name;

     cout << "roll = " << u1.roll << endl;
    cout << "age = " << u1.age << endl;
    cout << "name = " << u1.name << endl;
}
