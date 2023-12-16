#include<iostream>
 using namespace std;
 class human
 {
    public :
    int roll;
    char name[10];
    int age;
 };
 int main()
 {
    human s;
    cout << "Enter the roll" << endl;
        cin >>s.roll;
        cout << "Enter the name" << endl;
        cin >>s.name;
        cout << "Enter the age" << endl;
        cin >>s.age;

        cout <<"--------------------------------------"<<endl;
         cout << "roll no = " << s.roll << endl;
        cout << "name = " << s.name << endl;
        cout << "age  = " <<s.age << endl;
    }
 