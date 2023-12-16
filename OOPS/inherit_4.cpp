// herarchy inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int pqr()
    {
        cout << "disha"<<" ";
    }
    int mno(){
        cout<<"lab"<<endl;
    }
};
class B : public A
{
public:
    int xyz()
    {
        cout << "computer"<<" ";
    }
};
class C : public A
{
public:
    int abc()
    {
        cout << "institute"<<endl;
    }
};
int main(void)
{
    C c1;
    B b1;

    c1.pqr();
    c1.abc();
    b1.xyz();
    b1.mno();
    return 0;
}