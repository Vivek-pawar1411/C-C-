#include<iostream>
using namespace std;
#include <exception>

class MyException:public exception
{
    public:
    char * what()
    {
        return "My Custom Exception";
    }
};

int Division(int a, int b) throw (int, MyException)
{
    if (b == 0)
        throw 1;
    if (b == 1)
        throw MyException();
    return a / b;
}

int main()
{
    int x = 10, y = 1, z;
    try
    {
        z = Division (x, y);
        cout << z << endl;
    }
    catch (int x)
    {
        cout << "Division By Zero Error" << endl;
    }
    catch (MyException ME)
    {
        cout << "Division By One Error" << endl;
        cout << ME.what () << endl;
    }
    cout << "End of the Program" << endl;
    return 0;
}