//abstraction
#include<iostream>
using namespace std;
class A{
    private: int a,b;
    public:
    int  print(int a,int b) {
        int c;
        c=a+b;
        cout<<"c= "<<c<<endl;
    }
};
int main()
{
    int a,b;
    cout<<"Enter the number"<<endl;
    cin>>a>>b;
    A a1;
    a1.print(a,b);
    return 0;
}