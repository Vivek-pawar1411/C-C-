//parameterised constructor
#include <iostream>
using namespace std;
class a1
{
private:
    int a;
public:
    a1(int x)
    {
        a = x;
    }
    void display(int x)
    {
        int i = 0, c = 0;
        for (i = 1; i <= a; i++)
        {
            c += i;
        }
        cout << "sum of nutural number is  = " << c;
    }
};
int main(void)
{
    int a;
    cout << "Enter the natural number :" << endl;
    cin >> a;
    a1 g(a);
    g.display(a);
}
