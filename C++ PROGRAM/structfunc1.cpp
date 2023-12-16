#include <iostream>
using namespace std;
struct student
{
  int roll;
  int age;
  char name[20];
};
student accept(student s1)
{

  cout << "Enter the name" << endl;
  cin >> s1.name;

  cout << "Enter the roll" << endl;
  cin >> s1.roll;

  cout << "Enter the age" << endl;
  cin >> s1.age;
  return s1;
}

void display(struct student s1)
{

  cout << "name = " << s1.name << endl;
  cout << "roll = " << s1.roll << endl;
  ;
  cout << "age = " << s1.age << endl;
}

int main()
{
  struct student s, t;

  cout << "Enter the data " << endl;
  t = accept(s);
  // s=t;
  cout << "print the info" << endl;
  display(t);
  return 0;
}
