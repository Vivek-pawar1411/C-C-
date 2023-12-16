#include<iostream>
using namespace std;
#include <exception>

class MyException
{
};

int Division(int a, int b)
{
    if (b == 0)
        throw MyException();
    return a / b;
}

int main()
{
    int x = 10, y = 0, z;
    try
    {
        z = Division (x, y);
        cout << z << endl;
    }
    catch (MyException ME)
    {
        cout << "Division By Zero" << endl;
    }
    cout << "End of the Program" << endl;
}