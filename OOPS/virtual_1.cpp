// virtual function
#include <iostream>
using namespace std;
class Electricity{
public:
    int custid;
    string name;
    int amt;
    int c=0;
    int i=0;
     void accept() {
        cout << "Enter the customer id" << endl;
        cin >> custid;
        cout << "Enter the customer name" << endl;
        cin >> name;
        cout << "Enter the Electricity bill amount" << endl;
        cin >> amt;
    }
    void calc(){
        if (amt<100)
        {
           c= amt*10;
           cout<<"your amount = "<<c<<endl;
        }
        else if (amt>=100 && amt<=1000)
        {
            c=amt*20;
            cout<<"your amount = "<<c<<endl;
        }
      else
      {
          cout<<"Invalid unit "<<c<<endl;
      }            
    }
    void gst(){
        
        i=c*18;
      cout<<"after gst amount = "<<i<<endl;

    }
        void display(int x)
    {
        cout << "customer id = " << custid << endl;
        cout << "customer Name = " << name << endl;
        cout << " updated bill amount  = " << i << endl;
    }
};

int main(void)
{   int x;
    Electricity e;
    e.accept();
    e.calc();
    e.gst();
    e.display(x);
}