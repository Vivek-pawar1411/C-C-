// poly compile time
// function overloading
#include <iostream>
using namespace std;
class temp
{
private:
    int x = 10;
    double x1 = 20.1;

public:
    int add(int y)
    {
        cout << x + y << endl;
    }
    double add(double d)
    {
        cout << x1 + d << endl;
    }
    int add(int y, int z)
    {
        cout << x + y + z << endl;
    }
    char add(string z)
    {
        cout << z << endl;
    }
};
int main(void)
{
    temp t1;
    t1.add(10);
    t1.add(11.25);
    t1.add(12, 13);
    t1.add("hyper");
}