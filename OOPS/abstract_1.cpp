// abstraction
#include <iostream>
using namespace std;
class Employ
{
private:
    string pass;
    string log;

public:
    string print(string log, string pass)
    {
        string j = "tanmay@5530";
        string k = "tanmay123";
    jump:
        cout << "Enter the login" << endl;
        cin >> log;
        cout << "Enter the password" << endl;
        cin >> pass;
        if ((log == j) && (pass == k))
        {
            cout << "Employ info" << endl;
            cout << "login = " << log << endl;
            cout << "password = " << pass << endl;
            cout << " "
                 << "login successful" << endl;
        }
        else
        {
            cout << "incorrect login" << endl;
            cout << "Enter corrrect login" << endl;
        }
        goto jump;
    }
};
int main()
{
    string log;
    string pass;
jump:
    cout << "Enter the login" << endl;
    cin >> log;
    cout << "Enter the password" << endl;
    cin >> pass;
    Employ e1;
    e1.print(log, pass);
    return 0;
}