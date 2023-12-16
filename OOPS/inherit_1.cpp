// Multiple inheritance
#include <iostream>
using namespace std;
class A
{
    public :
    int a;
    int b;

    void insert()
    {
        cout << "Enter the number ";
        cin >> a >> b;
    }
};
class B
{
    public:
    int x;
    int y;
    void insert_1()
    {
        cout << "Enter the number ";
        cin >> x >> y;
    }
};
class C : public B,public A
{
    int m;
    int n;
public :
    void add()
    {
        m = a + b;
    }
    void sum()
    {
        n = x * y;
    }
    void display()
    {
        cout << m << endl;
        cout << n << endl;
    }
};
int main(void)
{
    C c1;
    c1.insert();
    c1.insert_1();
    c1.add();
    c1.sum();
    c1.display();
    return 0;
}