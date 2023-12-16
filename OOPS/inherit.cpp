// single inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int a, b;
    void insert()
    {
        cout << "Enter the number ";
        cin >> a >> b;
    }
};

class B : public A
{
public:
    int c = 0;

    void addition()
    {
        c = a + b;
        cout << "addtion = " << c << endl;
    }
    void multiple()
    {
        c = a * b;
        cout << "multi = " << c << endl;
    }
    void subtraction()
    {
        c = a - b;
        cout << "subtract = " << c << endl;
    }
    void factorial()

    {
        int i, fact = 1, n;
        cout << "Enter a number: ";
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << "factorial = " << fact << endl;
    }
};

int main(void)
{
    B b1;
    b1.insert();
    b1.addition();
    b1.multiple();
    b1.subtraction();
    b1.factorial();
    return 0;
}