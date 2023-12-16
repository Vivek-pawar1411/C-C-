#include <iostream>
using namespace std;
void armstrong(int a)
{
    int c = 0, d, temp;
    temp = a;
    while (a != 0)
    {
        d = a % 10;
        c = c + (d * d * d);
        a = a / 10;
    }
    if (temp == c)
    {
        cout << "it is armstrong number = " << c << endl;
    }
    else
    {
        cout << "it is not  armstrong number = " << c << endl;
    }
}
void prime(int a)
{
    int i, c = 0;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        cout << "it is prime number = " << a << endl;
    }
    else
    {
        cout << "it is not  prime number = " << a << endl;
    }
}
void perfect(int a)
{
    int b = 0, i;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            b += i;
        }
    }
    if (b == a)
    {
        cout << "it is perfect number = " << a << endl;
    }
    else
    {
        cout << "it is not  perfect number = " << a << endl;
    }
}
void palindrome(int a)
{
    int b = 0, temp;
    temp = a;

    while (a > 0)
    {
        b = b * 10;
        b = b + a % 10;
        a = a / 10;
    }

    if (temp == b)
    {
        cout << "it is palindrome = " << b << endl;
    }
    else
    {
        cout << "not palindrome = " << b << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    // cout << "check the number" << endl;
    armstrong(n);
    prime(n);
    perfect(n);
    palindrome(n);
}