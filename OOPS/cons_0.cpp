//parameterless or default constructor
#include <iostream>
using namespace std;
class area
{
private:
    float len;
    int brdth;

public:
    area()
    {
        cout << "Enter the len :" << endl;
        cin >> len;
        cout << "Enter the bredth :" << endl;
        cin >> brdth;
        cout << "length = " << len << endl;
        cout << "breadth = " << brdth << endl;
    }
};
int main(void)
{

    area a;
}