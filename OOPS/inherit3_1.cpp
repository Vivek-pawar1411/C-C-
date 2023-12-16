// Multilevel inheritance
#include <iostream>
using namespace std;
class A{
public:
int i;
    int pqr()
    {
        cout << "Enter the first number" << endl;
        cin>>i;
    }
};
class B : public A{
public:
int j;
    int xyz()
    {
        cout << "Enter the first number" << endl;
        cin>>j;
    }
};
class C : public B{
public:
int m=0;
    int abc()
    {
        m=i*j;
        cout << "product = "<<m<< endl;
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