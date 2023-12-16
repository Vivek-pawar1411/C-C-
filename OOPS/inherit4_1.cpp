// herarchy inheritance
#include <iostream>
using namespace std;
class A
{
public:
int l,b;
float r;
    int len()
    {
        cout <<"Enter the len and ";
        cin>>l>>b;
    }
     int rad()
    {
        cout <<"Enter the radius";
        cin>>r;
    }
    
};
class B : public A
{
public:
    int circle()
     { float  ans=0;
        float pi=3.14;
        
   ans = pi*(r*r);
        cout << "ans = "<<ans<<endl;
    }
};
class C : public A
{
public:
    int rectangle()
    {
        int res=0;
        res=l*b;
        cout << "res= "<<res<<endl;
    }
};
int main(void)
{
    C c1;
    B b1;
    c1.len();
    c1.rectangle();
    b1.rad();
    b1.circle();
    return 0;
}