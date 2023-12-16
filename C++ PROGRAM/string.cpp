#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char av[10];
    char va[10];
    cout << "Enter the name";
    cin >> av;
    cout << "Enter the name 1";
    cin >> va;
    cout << av << endl;
    cout << va << endl;
    cout << strlen(av) << endl;
    // cout<<strchr(av[10])<<endl;
    cout << strupr(av) << endl;

    cout << strcmp(av, va) << endl;

    cout << strcpy(av, va) << endl;
    cout << strlwr(va) << endl;
}
