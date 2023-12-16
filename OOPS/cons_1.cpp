//parameterised constructor
#include <iostream>
using namespace std;
class a1
{
private:
    int a;
    int b;

public:
    a1(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(int x, int y)
    {
        int c = 0;
        c = a + b;
        cout << "ans = " << c<<endl;
         c = a - b;
        cout << "ans = " << c<<endl;
         c = a * b;
        cout << "ans = " << c<<endl;
    }
};
int main(void)
{
    int a, b;
   cout << "Enter the len :" << endl;
    cin >> a;
    cout << "Enter the bredth :" << endl;
    cin >> b;
    a1 g(a,b);
    g.display(a, b);
}
