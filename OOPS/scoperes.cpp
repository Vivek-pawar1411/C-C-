//poly
//function overriding
#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1, d1;
    derived1.print();
   // d1.Base::print();
   derived1.Base::print();
    return 0;
}