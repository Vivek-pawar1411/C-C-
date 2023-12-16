// poly compile time
// function overloading
#include <iostream>
using namespace std;
class temp
{
private:
    int x=4 ;

public:
    int factorial()
    {
        int i, fact = 1, number;


        for (i = 1; i <= x; i++)
        {
            fact = fact * i;
        }
        cout << fact << endl;
    }
    int factorial(int n)
    {
        int i, fact = 1, number;

        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << fact << endl;
    }
};
int main(void)
{
    temp t1;
    int n;
    cout << "Enter the : " << endl;
    cin >> n;
    t1.factorial();
    t1.factorial(n);
}