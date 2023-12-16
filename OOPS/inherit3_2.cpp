// Multilevel inheritance
#include <iostream>
using namespace std;
class A
{
public:
int r;
    int pqr()
    {
        cout << "Enter the starting number" << endl;
        cin>>r;
    }
};
class B : public A
{
public:
int s;
    int xyz()
    {
        cout << "Enter the ending number" << endl;
        cin>>s;
    }
};
class C : public B
{
public:

    int abc()
    {
        int i,sum=0;
        for ( i = r; i <=s; i++)
        {
            sum+=i;
        }
        
        cout << "product = "<<sum<< endl;
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