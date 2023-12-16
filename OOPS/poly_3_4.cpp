// poly
// function overriding
#include <iostream>
using namespace std;

class parent
{
public:
    void print()
    {
        cout << "parent 1st gen Function" << endl;
    }
};

class child : public parent
{
public:
    void print()
    {
        cout << "child 2nd gen Function" << endl;
    }
};

int main()
{
    child child1, d1;
    child1.parent::print();
    child1.print();

    return 0;
}