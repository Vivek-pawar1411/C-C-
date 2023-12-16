//copy constructor
#include <iostream>
using namespace std;
class area
{
private:
    int  a;
    int b;
                                                
public:
    area(int x,int y)
    {
        a = x;
        b=y;
    }
    area (area &obj){
        a=obj.a;
        b=obj.b;
    }
    void display(int x,int y)
    {
        int c=0;
      cout<<a<<endl;
      cout<<b<<endl;
      c=a+b;
      cout<<"addition of number = "<<c<<endl;
  }
};
int main(void)
{
  int a,b;
  cout<<"Enter the number :"<<endl;
  cin>>a>>b;

    area a1(a,b);
    area a2=a1;
    a1.display(a,b);
    a2.display(a,b);
}