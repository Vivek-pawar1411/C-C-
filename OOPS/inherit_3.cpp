// Multilevel inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int pqr()
    {
        cout << "parent class" << endl;
    }
};
class B : public A
{
public:
    int xyz()
    {
        cout << "1st child class" << endl;
    }
};
class C : public B
{
public:
    int abc()
    {
        cout << "2nd child" << endl;
    }
};
int main(void)
{
    C c1;

    c1.pqr();
    c1.xyz();
    c1.abc();
    return 0;
}