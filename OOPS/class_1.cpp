/*#include <iostream>
using namespace std;
class box
{
public:
    int length;
    int breadth;
    int height;

    int area()
    {
        int res = 0;
        res = length * breadth;
        // cout << "result = " << res<<endl;
        return res;
    }
    int volume()
    {
        int res = 0;
        res = length * breadth * height;
        //  cout << "result = " << res;
        return res;
    }
};

int main()
{
    box len;
    cout << "Enter the len" << endl;
    cin >> len.length;
    cout << "Enter the breadth" << endl;
    cin >> len.breadth;
    cout << "Enter the height" << endl;
    cin >> len.height;
    cout << "area = " << len.area() << endl;
    cout << "volume = " << len.volume() << endl;
    return 0;
}
*/



#include <iostream>
using namespace std;
class box
{
private:
    int length;
    int breadth;
    int height;
    public:
    void abc (int len, int bredth, int hight){
        length=len;
        breadth= bredth;
        height= hight;
    }

    int area()
    {

        int res = 0;
    
        res = length * breadth;
        // cout << "result = " << res<<endl;
        return res;
    }
    int volume()
    {
        int res = 0;
        res = length * breadth * height;
        //  cout << "result = " << res;
        return res;
    }
};

int main()
{
    box len;
   /* cout << "Enter the len" << endl;
    cin >> len.length;
    cout << "Enter the breadth" << endl;
    cin >> len.breadth;
    cout << "Enter the height" << endl;
    cin >> len.height;*/

    len.abc(5,6,9);

    cout << "area = " << len.area() << endl;
    cout << "volume = " << len.volume() << endl;
    return 0;
}

