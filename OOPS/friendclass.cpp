//friend class
#include<iostream>
using namespace std;
class ABC{
    private: 
    int a;
    int b;
    public:
    ABC(){
    
    }
    friend class F;
};
class F{
    public:
    void display(ABC& t){
    
    cout<<"Enter the number"<<endl;
    cin>>t.a>>t.b;
        cout<<t.a<<endl;
      cout<<t.b<<endl;

    }
};
int main(void){
    
    ABC c;
    F d;
    d.display(c);
    
}