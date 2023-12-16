#include<iostream>
using namespace std;
class A
{
private :
 int a;
 int b;
 public :
  A(int x, int y){
      a=x;
      b=y;
  }
  void display(int x, int y)
  {
      cout<<a<<endl;
      cout<<b<<endl;
  }
};
int main()
{
    int a,b;
    
   A a1(5,6);
    a1.display(a,b);
}