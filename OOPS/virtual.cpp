// virtual function
#include <iostream>
using namespace std;
class AB
{
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }
    void show()
    {
        cout << "print  show base class" << endl;
    }
};

class BC : public AB
{
public:
    void print()
    {
        cout << "print drived class" << endl;
    }
    void show()
    {
        cout << "print  show drived class" << endl;
    }
};
int main(void)
{
AB e;
    AB *c;
    BC d;
    c = &d;
    c->print();
    c->show();
    e.print();
    e.show();
}