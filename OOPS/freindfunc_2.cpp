// friend class
#include <iostream>
using namespace std;
class ABC
{
private:
    int a;
    int b;
    int c;

public:
    ABC()
    {
    }
    friend void friendfact(ABC &t);
};

void friendfact(ABC &t)
{
    int i;
    t.b =1 ;
    cout << "Enter the number" << endl;
    cin >> t.a;
    for (i = 1; i <= t.a; i++)
    {
        t.b = t.b * i;
    }
    cout << "fact = " << t.b;
}

int main(void)
{

    ABC c;

    friendfact(c);
}